/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:27:01 by zouddach          #+#    #+#             */
/*   Updated: 2024/10/22 14:25:59 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"
#include <iostream>

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++) {
        _materias[i] = NULL;
    }
    std::cout << "MateriaSource Default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &a) {
    if (this == &a)
        return ;
    for (int i = 0; i < 4; i++) {
        if (a._materias[i] != NULL)
            _materias[i] = a._materias[i]->clone();
    }
    std::cout << "MateriaSource Copy constructor called" << std::endl;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++) {
        if (_materias[i] != NULL)
            delete _materias[i];
    }
    std::cout << "MateriaSource Destructor called" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &a) {
    if (this == &a)
        return *this;
    for (int i = 0; i < 4; i++) {
        if (_materias[i] != NULL)
            delete _materias[i];
    }
    
    for (int i = 0; i < 4; i++) {
        if (a._materias[i] != NULL)
            _materias[i] = a._materias[i]->clone();
    }
    std::cout << "MateriaSource Assignation operator called" << std::endl;
    return *this;
}

void MateriaSource::learnMateria(AMateria *m) {
    if (m == NULL)
        return ;
    int i = 0;
    while (i < 4 && _materias[i] != NULL) {
        i++;
    }
    if (i == 4)
    {
        std::cout << "MateriaSource: MateriaSource is full" << std::endl;
        return ;
    }
    _materias[i] = m;
    return ;
}

AMateria *MateriaSource::createMateria(std::string const &type) {
    int i = 0;
    while (i < 4 && _materias[i] != NULL) {
        if (_materias[i]->getType() == type)
        {
            std::cout << "MateriaSource: Materia found and copied" << std::endl;
            return _materias[i]->clone();
        }
        i++;
    }
    std::cout << "MateriaSource: Materia not found" << std::endl;
    return NULL;
}
