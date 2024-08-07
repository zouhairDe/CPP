/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:29:16 by marvin            #+#    #+#             */
/*   Updated: 2024/08/07 00:02:02 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

void Zombie::announce( void ) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName() const {
    return this->_name;
}

Zombie::~Zombie( void ) {
	std::cout << this->_name << " is dying..." << std::endl;
}

void Zombie::setName( std::string name ) {
	this->_name = name;
	this->announce();
}

Zombie* zombieHorde( int N, std::string name ) {
	if (N <= 0) {
		std::cout << "Invalid number of zombies" << std::endl;
		return NULL;
	}
	Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; ++i) {
        horde[i].setName(name);
    }
    return horde;
}