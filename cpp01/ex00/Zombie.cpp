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

Zombie::Zombie( std::string name ) : _name(name) {
	this->announce();
}

void Zombie::announce( void ) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie( void ) {
	std::cout << this->_name << " is dying..." << std::endl;
}

Zombie* Zombie::newZombie( std::string name ) {
	return (new Zombie(name));
}

void Zombie::randomChump( std::string name ) {
	Zombie zombie(name);
}