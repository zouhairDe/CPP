/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 02:01:17 by zouddach          #+#    #+#             */
/*   Updated: 2024/09/12 02:01:17 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP


# include "Animal.hpp"

class Cat : public Animal {
    public:
        Cat();
        Cat(const Cat &c);
        ~Cat();
        Cat &operator=(const Cat &c);
        void makeSound() const;
};



#endif