/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 02:11:56 by zouddach          #+#    #+#             */
/*   Updated: 2024/10/21 19:34:23 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
    private:
        Brain *brain;
    public:
        Dog();
        Dog(const Dog &d);
        ~Dog();
        Dog &operator=(const Dog &d);
        void makeSound() const;
        void getBrainAdrr() const;
        std::string *printIdeaAdressOf(int i) const;
        std::string printIdeaNumber(int i) const;
};

#endif