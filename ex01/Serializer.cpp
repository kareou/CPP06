/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:48:46 by mkhairou          #+#    #+#             */
/*   Updated: 2023/08/10 20:31:04 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {
}

Serializer::~Serializer() {
}

Serializer::Serializer(const Serializer& other) {
	*this = other;
}

Serializer& Serializer::operator=(const Serializer& other) {
	if (this != &other) {

	}
	return *this;
}

uintptr_t Serializer::serialize(Data* ptr)
{
	uintptr_t res;

	res = reinterpret_cast<uintptr_t>(ptr);
	return res;
}

Data* Serializer::deserialize(uintptr_t* raw)
{
	Data* res;

	res = reinterpret_cast<Data*>(*raw);
	return res;
}
