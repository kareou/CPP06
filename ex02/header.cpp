/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 22:09:15 by mkhairou          #+#    #+#             */
/*   Updated: 2023/08/11 12:40:19 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Base * generate(void)
{
	srand(time(0));

	int tmp = rand() % 3;
	if (tmp == 0)
		return new A;
	else if (tmp == 1)
		return new B;
	else
		return new C;
}

void identify(Base * p)
{
	std::string tmp;
	if(dynamic_cast<A*>(p))
		tmp = "A";
	else if (dynamic_cast<B*>(p))
		tmp = "B";
	else
		tmp = "C";
	std::cout << "pointer type is " + tmp << std::endl;
}

void identify(Base & p)
{
    std::string tmp;
    try {
		A& a = dynamic_cast<A&>(p);
		(void)a;
        tmp = "A";
    }
    catch(std::bad_cast& bc) {
        try {
			B& b = dynamic_cast<B&>(p);
			(void)b;
            tmp = "B";
        }
        catch(std::bad_cast& bc) {
            tmp = "C";
        }
    }
    std::cout << "pointer type is " + tmp << std::endl;
}

