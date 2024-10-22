/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 02:01:17 by zouddach          #+#    #+#             */
/*   Updated: 2024/10/21 18:46:32 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
    private:
        Brain *brain;
    public:
        Cat();
        Cat(const Cat &c);
        ~Cat();
        Cat &operator=(const Cat &c);
        void makeSound() const;
};



#endif