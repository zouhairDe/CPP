/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:29:16 by marvin            #+#    #+#             */
/*   Updated: 2024/08/06 17:29:16 by marvin           ###   ########.fr       */
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
	Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; ++i) {
        horde[i].setName(name);
    }
    return horde;
}