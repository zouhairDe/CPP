/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:01:00 by zouddach          #+#    #+#             */
/*   Updated: 2024/10/22 11:01:51 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

# include <iostream>
# include "AMateria.hpp"

class IMateriaSource {
    public:
        virtual         ~IMateriaSource() {}
        virtual void     learnMateria(AMateria *m) = 0;
        virtual AMateria *createMateria(std::string const &type) = 0;
};

#endif