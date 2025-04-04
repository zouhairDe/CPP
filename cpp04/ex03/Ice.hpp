/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:33:45 by zouddach          #+#    #+#             */
/*   Updated: 2024/11/23 23:07:31 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
    public:
        Ice();
        Ice(const Ice &a);
        ~Ice();
        Ice &operator=(const Ice &a);
        AMateria *clone() const;
        void use(ICharacter &target);
};

# endif