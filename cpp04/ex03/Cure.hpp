/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:41:25 by zouddach          #+#    #+#             */
/*   Updated: 2024/10/22 12:41:50 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria {
    public:
        Cure();
        Cure(const Cure &a);
        ~Cure();
        Cure &operator=(const Cure &a);
        AMateria *clone() const;
        void use(ICharacter &target);
};

#endif