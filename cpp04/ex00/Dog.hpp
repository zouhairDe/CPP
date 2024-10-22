/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 02:11:56 by zouddach          #+#    #+#             */
/*   Updated: 2024/09/12 02:11:56 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {
    public:
        Dog();
        Dog(const Dog &d);
        ~Dog();
        Dog &operator=(const Dog &d);
        void makeSound() const;
};

#endif