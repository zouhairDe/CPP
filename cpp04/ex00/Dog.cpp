/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 02:38:52 by zouddach          #+#    #+#             */
/*   Updated: 2024/09/12 02:38:52 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    _type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &d) : Animal(d) {
    _type = d._type;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &d) {
    _type = d._type;
    std::cout << "Dog assignation operator called" << std::endl;
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}