/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:32:38 by zouddach          #+#    #+#             */
/*   Updated: 2024/10/21 17:32:53 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongDog.hpp"

WrongDog::WrongDog() {
    _type = "WrongDog";
    std::cout << "WrongDog constructor called" << std::endl;
}

WrongDog::WrongDog(const WrongDog &w) {
    _type = w._type;
    std::cout << "WrongDog copy constructor called" << std::endl;
}

WrongDog::~WrongDog() {
    std::cout << "WrongDog destructor called" << std::endl;
}

WrongDog &WrongDog::operator=(const WrongDog &w) {
    _type = w._type;
    std::cout << "WrongDog assignation operator called" << std::endl;
    return *this;
}

void WrongDog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}