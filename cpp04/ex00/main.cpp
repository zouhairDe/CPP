/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 02:41:06 by zouddach          #+#    #+#             */
/*   Updated: 2024/11/23 22:26:33 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
# include "WrongCat.hpp"
# include "WrongDog.hpp"

int main()
{
    //  Intra Tests....
    // const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // std::cout << j->getType() << std::endl;
    // std::cout << i->getType() << std::endl;
    // i->makeSound(); //will output the cat sound!
    // j->makeSound();
    // meta->makeSound();

    // delete meta;
    // delete j;
    // delete i;
    // return 0;
    //  My Tests....
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;

    dog->makeSound();
    cat->makeSound();

    delete dog;
    delete cat;

    /* Tests for wrong animals */
    std::cout << "\n======== Tests for wrong animals ========\n" << std::endl;
    const WrongAnimal* wcat = new WrongCat();
    const WrongAnimal* wdog = new WrongDog();
    std::cout << wcat->getType() << " " << std::endl;
    std::cout << wdog->getType() << " " << std::endl;
    
    wcat->makeSound();
    wdog->makeSound();

    delete wcat;
    delete wdog;
    
    return 0;
}