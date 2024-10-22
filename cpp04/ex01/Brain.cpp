/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:50:26 by zouddach          #+#    #+#             */
/*   Updated: 2024/10/21 19:39:09 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
    {
        ideas[i] = "Idea number " + std::to_string(i);
    }
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &b)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = b;
}

Brain &Brain::operator=(const Brain &b)
{
    std::cout << "Brain assignation operator called" << std::endl;
    this->ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
    {
        if (b.ideas[i].empty())
            break;
        ideas[i] = b.ideas[i] + " has been copied";
    }
    return *this;
}

Brain::~Brain()
{
    delete[] ideas;
    std::cout << "Brain destructor called" << std::endl;
}