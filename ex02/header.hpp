/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 22:09:18 by mkhairou          #+#    #+#             */
/*   Updated: 2023/08/11 15:51:56 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void);
void identify(Base * p);
void identify(Base & p);

#endif
