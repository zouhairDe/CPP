/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:55:01 by zouddach          #+#    #+#             */
/*   Updated: 2024/10/22 12:13:10 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

# include "ICharacter.hpp"
# include <iostream>

class ICharacter;

class AMateria {
    protected:
        std::string _type;
    public:
        AMateria();
        AMateria(const AMateria &a);
        virtual ~AMateria();
        AMateria &operator=(const AMateria &a);
        std::string getType() const;
        virtual AMateria *clone() const = 0;
        virtual void use(ICharacter &target);
};

#endif