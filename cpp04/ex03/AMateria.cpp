/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:11:32 by zouddach          #+#    #+#             */
/*   Updated: 2024/10/22 12:48:39 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

AMateria::AMateria() {
    _type = "default";
    std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &a) {
    _type = a._type;
    std::cout << "AMateria Copy constructor called" << std::endl;
}

AMateria::~AMateria() {
    std::cout << "AMateria Destructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &a) {
    _type = a._type;
    std::cout << "AMateria Assignation operator called" << std::endl;
    return *this;
}

std::string AMateria::getType() const {
    return _type;
}

void AMateria::use(ICharacter &target) {
    (void)target;
    std::cout << "AMateria: use" << std::endl;
}