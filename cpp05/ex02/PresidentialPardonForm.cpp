/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:05:14 by zouddach          #+#    #+#             */
/*   Updated: 2025/02/12 18:06:57 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Default_AForm", 25, 5) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target + "_AForm", 25, 5) {
    this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy) {
    this->_target = copy._target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy) {
    if (this != &copy) {
        this->_target = copy._target;
    }
    return *this;
}

void	PresidentialPardonForm::doTaks() {
    std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) {
    AForm::execute(executor);
    doTaks();
    std::cout << executor.getName() << " executed " << AForm::getName() << std::endl;
}

std::ostream &operator<<(std::ostream &out, const PresidentialPardonForm &PresidentialPardonForm) {
    out << "PresidentialPardonForm " << PresidentialPardonForm.getName() << " is ";
    if (PresidentialPardonForm.isSigned())
        out << "signed";
    else
        out << "not signed";
    out << " and requires grade " << PresidentialPardonForm.getGradeToSign() << " to be signed and grade " << PresidentialPardonForm.getGradeToExecute() << " to be executed" << std::endl;
    return out;
}