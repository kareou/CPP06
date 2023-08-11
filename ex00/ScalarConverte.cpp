/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:38:44 by mkhairou          #+#    #+#             */
/*   Updated: 2023/08/11 15:49:59 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverte.hpp"

std::string ScalarConverte::type = "";

ScalarConverte::ScalarConverte()
{
}

ScalarConverte::ScalarConverte(std::string str)
{
	ScalarConverte::convert(str);
}

ScalarConverte::~ScalarConverte()
{
}

ScalarConverte::ScalarConverte(const ScalarConverte &other)
{
	*this = other;
}

ScalarConverte &ScalarConverte::operator=(const ScalarConverte &other)
{
	if (this != &other)
	{
	}
	return *this;
}

void ScalarConverte::toChar(std::string str)
{
	char *leter;
	std::cout << "char: ";
	if (str == "nan" || str == "nanf")
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if(ScalarConverte::type == "char")
	{
		if(std::isprint(str.front()))
			std::cout << static_cast<char>(str.front()) << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
		return ;
	}
	double tmp = std::strtod(str.c_str(), &leter);
	if (*leter != '\0')
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if(tmp > CHAR_MAX || tmp < CHAR_MIN)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	else if(std::isprint(tmp))
		std::cout  << static_cast<char>(tmp)  << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}

void ScalarConverte::toInt(std::string str)
{
	char *leter;
	std::cout << "int: ";
	if (str == "nan" || str == "nanf")
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if(ScalarConverte::type == "char")
	{
		std::cout << static_cast<int>(str.front()) << std::endl;
		return ;
	}
	double tmp = std::strtod(str.c_str(), &leter);
	if (*leter != '\0')
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if(tmp > INT_MAX || tmp < INT_MIN)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	else
		std::cout << static_cast<int>(tmp) << std::endl;
}

void ScalarConverte::toFloat(std::string str)
{
	char *leter;
	std::cout << "float: ";
	if (str == "nan" || str == "nanf")
	{
		std::cout << "nanf" << std::endl;
		return ;
	}
	if(ScalarConverte::type == "char")
	{
		std::cout << static_cast<float>(str.front()) << "f" << std::endl;
		return ;
	}
	double tmp = std::strtod(str.c_str(), &leter);
	if (*leter != '\0')
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if(tmp > FLT_MAX || tmp < -FLT_MAX)
	{
		if(tmp > FLT_MAX)
			std::cout << "+";
		else
			std::cout << "-";
		std::cout << "inff" << std::endl;
		return ;
	}
	else
		std::cout << static_cast<float>(tmp) << "f" << std::endl;
}

void ScalarConverte::toDouble(std::string str)
{
	char *leter;

	std::cout << "double: ";
	if (str == "nan" || str == "nanf")
	{
		std::cout << "nan" << std::endl;
		return ;
	}
	if(ScalarConverte::type == "char")
	{
		std::cout << static_cast<double>(str.front()) << std::endl;
		return ;
	}
	double tmp = std::strtod(str.c_str(), &leter);
	if (*leter != '\0')
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if(tmp > DBL_MAX || tmp < -DBL_MAX)
	{
		if(tmp > DBL_MAX)
			std::cout << "+";
		else
			std::cout << "-";
		std::cout << "inf" << std::endl;
		return ;
	}
	else
		std::cout << static_cast<double>(tmp) << std::endl;
}

void ScalarConverte::convert(std::string str)
{
	char* letter;
	std::strtod(str.c_str(), &letter);
	if(*letter != '\0' && str.length() == 1)
		ScalarConverte::type = "char";
	else if(*letter == '\0')
		ScalarConverte::type = "int";
	else if( str.back() == 'f')
	{
		str.erase(str.length() - 1);
		ScalarConverte::type = "float";
	}
	else
		ScalarConverte::type = "double";
	std::cout << std::fixed << std::setprecision((str.find('.') != std::string::npos) ? str.length() - str.find('.') - 1 : 1);
	toChar(str);
	toInt(str);
	toFloat(str);
	toDouble(str);
}
