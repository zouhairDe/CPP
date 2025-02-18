/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:56:27 by zouddach          #+#    #+#             */
/*   Updated: 2025/02/12 18:03:17 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Default_AForm", 72, 45) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target + "_AForm", 72, 45) {
    this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy) {
    this->_target = copy._target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy) {
    if (this != &copy) {
        this->_target = copy._target;
    }
    return *this;
}

void	RobotomyRequestForm::doTaks() {
    std::cout << "Drilling noise..." << std::endl;
    if (rand() % 2)
        std::cout << this->_target << " has been robotomized successfully" << std::endl;
    else
        std::cout << this->_target << " robotomization failed" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) {
    AForm::execute(executor);
    doTaks();
    std::cout << executor.getName() << " executed " << AForm::getName() << std::endl;
}

std::ostream &operator<<(std::ostream &out, const RobotomyRequestForm &RobotomyRequestForm) {
    out << "RobotomyRequestForm " << RobotomyRequestForm.getName() << " is ";
    if (RobotomyRequestForm.isSigned())
        out << "signed";
    else
        out << "not signed";
    out << " and requires grade " << RobotomyRequestForm.getGradeToSign() << " to be signed and grade " << RobotomyRequestForm.getGradeToExecute() << " to be executed" << std::endl;
    return out;
}