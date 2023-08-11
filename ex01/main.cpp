/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 20:15:32 by mkhairou          #+#    #+#             */
/*   Updated: 2023/08/10 20:28:44 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data* data = new Data;
	data->example1 = 42;
	data->example2 = "Hello World!";

	uintptr_t raw = Serializer::serialize(data);
	Data* res = Serializer::deserialize(&raw);

	std::cout << "example1: " << res->example1 << std::endl;
	std::cout << "example2: " << res->example2 << std::endl;

	delete data;
	return 0;
}
