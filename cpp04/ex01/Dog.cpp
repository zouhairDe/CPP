/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 02:38:52 by zouddach          #+#    #+#             */
/*   Updated: 2024/10/21 19:34:16 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    _type = "Dog";
    this->brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &d) : Animal(d) {
    _type = d._type;
    this->brain = new Brain(*d.brain);
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog() {
    delete this->brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &d) {
    if (this == &d)
        return *this;
    delete this->brain;
    this->brain = new Brain(*d.brain);
    _type = d._type;
    std::cout << "Dog assignation operator called" << std::endl;
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}

void Dog::getBrainAdrr() const {
    std::cout << this->brain << std::endl;
}

std::string    *Dog::printIdeaAdressOf(int i) const {
    return &this->brain->ideas[i];
}

std::string    Dog::printIdeaNumber(int i) const {
    return  this->brain->ideas[i];
}