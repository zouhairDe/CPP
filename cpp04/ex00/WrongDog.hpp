/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:32:17 by zouddach          #+#    #+#             */
/*   Updated: 2024/10/21 17:32:31 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

# include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal {
    public:
        WrongDog();
        WrongDog(const WrongDog &w);
        ~WrongDog();
        WrongDog &operator=(const WrongDog &w);
        void makeSound() const;
};

#endif