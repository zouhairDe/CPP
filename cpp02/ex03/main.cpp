/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 10:17:05 by zouddach          #+#    #+#             */
/*   Updated: 2024/08/12 14:16:21 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) {
	//   Fixed a;
	//   Fixed const b(Fixed(5.05f) * Fixed(2));
	//   std::cout << a << std::endl;
	//   std::cout << ++a << std::endl;
	//   std::cout << a << std::endl;
	//   std::cout << a++ << std::endl;
	//   std::cout << a << std::endl;
	//   std::cout << b << std::endl;
	//   std::cout << Fixed::max(a, b) << std::endl;
	//   return (0);

    /*My Tests...*/
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed c(5.04f * 2);
	Fixed d(b-a);
    std::cout << "My tests:  1  ==  true, 0  ==  false\n";
    std::cout << "a is : " << a << "and b is : " << b  << "c is : " << c << "d is d : "<< d << std::endl;
    std::cout << (b > a) << std::endl;
    std::cout << (b < a) << std::endl;
    std::cout << (b >= a) << std::endl;
    std::cout << (b == a) << std::endl;
    std::cout << (b <= a) << std::endl;
    std::cout << (b != a) << std::endl;
    std::cout << (b - c) << std::endl;
    return 0;
}