/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 17:22:48 by zouddach          #+#    #+#             */
/*   Updated: 2024/09/09 08:38:31 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    _name = other._name;
    _hitpoints = other._hitpoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << "ScavTrap Assignation operator called" << std::endl;
    _name = other._name;
    _hitpoints = other._hitpoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
    return *this;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap (string NAME) constructor called" << std::endl;
    _name = name;
    _hitpoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

void ScavTrap::attack(std::string const & target)
{
    std::cout << "ScavTrap " << _name << " attack " << target << " causing " << _attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " has entered in Gate keeper mode" << std::endl;
}