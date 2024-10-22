/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:34:22 by zouddach          #+#    #+#             */
/*   Updated: 2024/10/22 12:40:31 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"

Ice::Ice() {
    _type = "ice";
    std::cout << "Ice Default constructor called" << std::endl;
}

Ice::Ice(const Ice &a) {
    _type = a.getType();
    std::cout << "Ice Copy constructor called" << std::endl;
}

Ice::~Ice() {
    std::cout << "Ice Destructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &a) {
    _type = a._type;
    std::cout << "Ice Assignation operator called" << std::endl;
    return *this;
}

AMateria *Ice::clone() const {
    return new Ice(*this);
}

void Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}