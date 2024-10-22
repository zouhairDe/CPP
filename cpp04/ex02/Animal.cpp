/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 02:11:16 by zouddach          #+#    #+#             */
/*   Updated: 2024/10/21 18:43:52 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    _type = "Animal";
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &a) {
    _type = a._type;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &a) {
    _type = a._type;
    std::cout << "Animal assignation operator called" << std::endl;
    return *this;
}

std::string Animal::getType() const {
    return _type;
}

void Animal::makeSound() const {
    std::cout << "UNDEFINED" << std::endl;
}