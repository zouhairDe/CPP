/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 02:07:07 by zouddach          #+#    #+#             */
/*   Updated: 2024/09/12 02:07:07 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat() {
    _type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &c) {
    _type = c._type;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &c) {
    _type = c._type;
    std::cout << "Cat assignation operator called" << std::endl;
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Meow Meow" << std::endl;
}
