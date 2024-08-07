/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 02:19:37 by zouddach          #+#    #+#             */
/*   Updated: 2024/08/07 02:48:06 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {}

Harl::~Harl( void ) {}

void Harl::debug( void ) {
	std::cout << "Ta wach hna nb9aw ghir nDebugiw wla" << std::endl;
}

void Harl::info( void ) {
	std::cout << "Ta wach hna nb9aw ghir nInfowiw wla" << std::endl;
}

void Harl::warning( void ) {
	std::cout << "Ta wach hna nb9aw ghir nWarniw wla" << std::endl;
}

void Harl::error( void ) {
	std::cout << "Ta wach hna nb9aw ghir nErroriw wla" << std::endl;
}

void Harl::complain( std::string level ) {
	functions functions[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++) {
		if (levels[i] == level) {
			(this->*functions[i])();
			return ;
		}
		if (i == 3) {
			std::cout << "Invalid level" << std::endl;
		}
	}
}