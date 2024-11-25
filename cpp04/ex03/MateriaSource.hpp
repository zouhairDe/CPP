/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:00:37 by zouddach          #+#    #+#             */
/*   Updated: 2024/11/23 22:59:09 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

# include <iostream>// IWYU pragma: keep
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
    private:
        AMateria *_materias[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &a);
        ~MateriaSource();
        MateriaSource &operator=(const MateriaSource &a);
        void     learnMateria(AMateria *m);
        AMateria *createMateria(std::string const &type);
};

#endif