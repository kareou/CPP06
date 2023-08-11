/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:38:42 by mkhairou          #+#    #+#             */
/*   Updated: 2023/08/11 15:39:29 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScalarConverte_HPP
#define ScalarConverte_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cfloat>

class ScalarConverte {
public:
	ScalarConverte();
	ScalarConverte(std::string str);
	~ScalarConverte();
	ScalarConverte(const ScalarConverte& other);
	ScalarConverte& operator=(const ScalarConverte& other);
	static void convert(std::string str);
private:
	static void toChar(std::string str);
	static void toInt(std::string str);
	static void toFloat(std::string str);
	static void toDouble(std::string str);
	static std::string type;
};

#endif
