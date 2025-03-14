/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 21:07:43 by zouddach          #+#    #+#             */
/*   Updated: 2025/02/25 16:09:11 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Serializer.hpp"

int main()
{
    Data *data = new Data;
	std::string alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	std::string name;
	int age;

	for (int i = 0; i < 8; i++)
		name += alpha[rand() % alpha.length()];
	age = rand() % 100;
	data->name = name;
	data->age = age;
	std::cout << "Created Data with name: " << name << " and age: " << age << std::endl;
	uintptr_t *raw = Serializer::serialize(data);
	data = Serializer::deserialize(raw);
	std::cout << "Deserialized Data with name: " << data->name << " and age: " << data->age << std::endl;
	delete data;
    return 0;
}