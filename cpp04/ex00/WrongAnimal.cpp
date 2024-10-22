/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:29:03 by zouddach          #+#    #+#             */
/*   Updated: 2024/10/21 17:39:02 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    _type = "WrongAnimal";
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &w) {
    _type = w._type;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &w) {
    _type = w._type;
    std::cout << "WrongAnimal assignation operator called" << std::endl;
    return *this;
}

void WrongAnimal::makeSound() const {
    std::cout << "BaseClass makeSound called: !" << std::endl;
}

std::string WrongAnimal::getType() const {
    return _type;
}
