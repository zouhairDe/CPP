/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 08:48:09 by zouddach          #+#    #+#             */
/*   Updated: 2024/09/09 08:49:29 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
    _name = other._name;
    _hitpoints = other._hitpoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    std::cout << "FragTrap Assignation operator called" << std::endl;
    _name = other._name;
    _hitpoints = other._hitpoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
    return *this;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap (string NAME) constructor called" << std::endl;
    _name = name;
    _hitpoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " high fives guys" << std::endl;
}