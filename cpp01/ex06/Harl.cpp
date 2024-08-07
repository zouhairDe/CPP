/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 02:19:37 by zouddach          #+#    #+#             */
/*   Updated: 2024/08/07 03:19:58 by zouddach         ###   ########.fr       */
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
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int levels_count = 0;
	for (int i = 0; i < 4; i++) {
		if (levels[i] == level) {
			levels_count = i;
			break ;
		}
		if (i == 3) {
			std::cout << "[ Ta ach katkhrb9 ??? ]" << std::endl;
			return ;
		}
	}

	switch (levels_count) {
		case 0:
			this->debug();
			break;
		case 1:
			this->info();
			break;
		case 2:
			this->warning();
			break;
		case 3:
			this->error();
			break;
	}
}