/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:41:56 by zouddach          #+#    #+#             */
/*   Updated: 2024/11/23 23:05:49 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() {
    _type = "cure";
    std::cout << "Cure Default constructor called" << std::endl;
}

Cure::Cure(const Cure &a) : AMateria(a) {
    _type = a.getType();
    std::cout << "Cure Copy constructor called" << std::endl;
}

Cure::~Cure() {
    std::cout << "Cure Destructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &a) {
    _type = a._type;
    std::cout << "Cure Assignation operator called" << std::endl;
    return *this;
}

AMateria *Cure::clone() const {
    return new Cure(*this);
}

void Cure::use(ICharacter &target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}