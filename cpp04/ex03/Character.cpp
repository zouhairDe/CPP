/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:14:39 by zouddach          #+#    #+#             */
/*   Updated: 2024/10/22 14:16:45 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"
#include <iostream>

Character::Character() : _name("Default") {
    for (int i = 0; i < 4; i++) {
        _materias[i] = NULL;
    }
    std::cout << "Character Default constructor called" << std::endl;
}

Character::Character(std::string name) : _name(name) {
    for (int i = 0; i < 4; i++) {
        _materias[i] = NULL;
    }
    std::cout << "Character Parametric constructor called" << std::endl;
}

Character::Character(const Character &a) : _name(a._name + " but Copied") {
    for (int i = 0; i < 4; i++) {
        if (a._materias[i] != NULL)
            _materias[i] = a._materias[i]->clone();
    }
    std::cout << "Character Copy constructor called" << std::endl;
}

Character::~Character() {
    for (int i = 0; i < 4; i++) {
        if (_materias[i] != NULL)
            delete _materias[i];
    }
    std::cout << "Character Destructor called" << std::endl;
}

Character &Character::operator=(const Character &a) {
    if (this == &a)
        return *this;
    static_cast<const std::string>(_name) + a._name + " but copy Assigned";
    for (int i = 0; i < 4; i++) {
        if (a._materias[i] != NULL)
            _materias[i] = a._materias[i]->clone();
    }
    std::cout << "Character Assignation operator called" << std::endl;
    return *this;
}

std::string const &Character::getName() const {
    return this->_name;
}

void Character::equip(AMateria *m) {
    if (m == NULL)
        return ;
    int i = 0;
    while ((this->_materias[i] != NULL) && i < 4)
        i++;
    if (i == 4)
    {
        std::cout << "This character is full" << std::endl;
        return ;
    }
    _materias[i] = m;
    std::cout << "Equipping " << m->getType() << " to " << _name << std::endl;
    
}

void Character::unequip(int idx) {
    if (idx < 0 || idx > 3)
        return ;
    std::cout << "Unequipping " << _materias[idx]->getType() << " from " << _name << std::endl;
    _materias[idx] = NULL;
    return;
}

void Character::use(int idx, ICharacter &target) {
    if (idx >= 0 && idx < 4 && _materias[idx] != NULL) {
        _materias[idx]->use(target);
        std::cout << "Using " << _materias[idx]->getType() << " on " << target.getName() << std::endl;
    } else {
        std::cerr << "Invalid index" << std::endl;
    }
}

std::ostream &operator<<(std::ostream &out, const Character &a) {
    out << a.getName();
    return out;
}