/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:26:58 by zouddach          #+#    #+#             */
/*   Updated: 2024/10/21 17:36:52 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &w);
        virtual ~WrongAnimal();
        WrongAnimal &operator=(const WrongAnimal &w);
        void makeSound() const;
        std::string getType() const;
    protected:
        std::string _type;
};

#endif