/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 01:44:48 by zouddach          #+#    #+#             */
/*   Updated: 2024/09/12 01:44:48 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ANIMAL_HPP
# define ANIMAL_HPP

class animal {
    public:
        animal();
        animal(const animal &a);
        virtual ~animal();
        animal &operator=(const animal &a);
        virtual void makeSound() const = 0;
        std::string getType() const;
    protected:
        std::string _type;
};




# endif