/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 01:44:48 by zouddach          #+#    #+#             */
/*   Updated: 2024/10/21 19:52:58 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {
    public:
        Animal();
        Animal(const Animal &a);
        virtual ~Animal();
        Animal &operator=(const Animal &a);
        virtual void makeSound() const = 0;
        std::string getType() const;
    protected:
        std::string _type;
};




# endif