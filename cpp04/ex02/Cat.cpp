/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 02:07:07 by zouddach          #+#    #+#             */
/*   Updated: 2024/10/21 19:18:46 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat() {
    _type = "Cat";
    this->brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &c) : Animal(c) {
    this->brain = new Brain(*c.brain);
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat() {
    delete this->brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &c) {
    if (this == &c)
        return *this;
    Animal::operator=(c);
    delete this->brain;
    this->brain = new Brain(*c.brain);
    std::cout << "Cat assignation operator called" << std::endl;
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Meow Meow" << std::endl;
}