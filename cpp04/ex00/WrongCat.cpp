/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:28:30 by zouddach          #+#    #+#             */
/*   Updated: 2024/10/21 17:28:47 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    _type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &w) : WrongAnimal(w) {
    _type = w._type;
    std::cout << "WrongCat copy constructor called" << std::endl;
} 

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &w) {
    _type = w._type;
    std::cout << "WrongCat assignation operator called" << std::endl;
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}