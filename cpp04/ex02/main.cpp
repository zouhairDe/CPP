/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 02:41:06 by zouddach          #+#    #+#             */
/*   Updated: 2024/10/21 19:51:41 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

// void leaks_check()
// {
//     std::cout << "\nChecking for leaks...\n" << std::endl;
//     system("leaks Animals");
// }

int main()
{
    // atexit(leaks_check);
    std::cout << "\nAllocating Animals...\n" << std::endl;
    Animal *animals[10];
    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << "\nDeallocating Animals...\n" << std::endl;
    for (int i = 0; i < 10; i++)
    {
        delete animals[i];
    }

    std::cout << "\nCopies checks...\n" << std::endl;
    Dog dog;
    Dog dog2(dog);
    Dog dog3 = dog;
    
    std::cout << "\nMemmory checks...\n" << std::endl;
    std::cout << "Dog's brain address: ";
    dog.getBrainAdrr();
    std::cout << "Dog2's brain address: ";
    dog2.getBrainAdrr();
    std::cout << "Dog3's brain address: ";
    dog3.getBrainAdrr();

    std::cout << "\nPrinting first 2 ideas...\n" << std::endl;
    for (int i = 0; i < 2; i++)
    {
        std::cout << "dog.brain->ideas[" << i << "] is: '" << dog.printIdeaNumber(i) << "' address: " << dog.printIdeaAdressOf(i) << std::endl;
        std::cout << "dog2.brain->ideas[" << i << "] is: '" << dog2.printIdeaNumber(i) << "' address: " << dog2.printIdeaAdressOf(i) << std::endl;
        std::cout << "dog3.brain->ideas[" << i << "] is: '" << dog3.printIdeaNumber(i) << "' address: " << dog3.printIdeaAdressOf(i) << std::endl;
    }
    return 0;
}