/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 20:36:30 by marvin            #+#    #+#             */
/*   Updated: 2024/08/06 20:36:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iostream"

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string* ptr2str = &str;
	std::string& ref2str = str;

	std::cout << "the address of str is   : " << &str << std::endl;
	std::cout << "the address of ptr2str  : " << ptr2str << std::endl;
	std::cout << "the address of ref4str  : " << &ref2str << std::endl;

	std::cout << "The str value is        : " << str.c_str() << std::endl;
	std::cout << "The pointer to str      : " << *ptr2str << std::endl;
	std::cout << "The reference to str    : " << ref2str << std::endl;	
	return 0;
}