/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 10:17:05 by zouddach          #+#    #+#             */
/*   Updated: 2024/08/12 19:05:26 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
    /*My Tests...*/
	Point a(Fixed(0), Fixed(0));
	Point b(Fixed(10), Fixed(0));
	Point c(Fixed(0), Fixed(10));
	Point d(Fixed(0.3f), Fixed(5));
	
	bool res = bsp(a, b, c, d);

	std::cout << "BSP result is " << (res ? "true" : "false") << std::endl;

	d = Point(Fixed(0), Fixed(5));

	res = bsp(a, b, c, d);
	
	std::cout << "BSP result is " << (res ? "true" : "false") << std::endl;
    return 0;
}