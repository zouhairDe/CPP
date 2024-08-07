/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 00:10:35 by zouddach          #+#    #+#             */
/*   Updated: 2024/08/07 00:28:29 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) , _weaponSet(false) {}

HumanB::~HumanB() {}

void HumanB::attack() {
	if (!_weaponSet)
		std::cout << this->_name << " cannot attack" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	this->_weaponSet = true;
	return ;
}