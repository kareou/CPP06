/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:48:44 by mkhairou          #+#    #+#             */
/*   Updated: 2023/08/10 20:18:26 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Serializer_HPP
#define Serializer_HPP

#include <iostream>
#include <string>
#include <stdint.h>

struct Data {
	int example1;
	std::string example2;
};

class Serializer {
public:
	Serializer();
	~Serializer();
	Serializer(const Serializer& other);
	Serializer& operator=(const Serializer& other);
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t* raw);
};

#endif
