/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 19:23:45 by zouddach          #+#    #+#             */
/*   Updated: 2025/02/12 19:38:03 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

std::string Intern::_forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
forms Intern::formR[3] = {&Intern::makeShrubberyCreationForm, &Intern::makeRobotomyRequestForm, &Intern::makePresidentialPardonForm};

Intern::Intern()
{
}

Intern::Intern(const Intern &copy)
{
    *this = copy;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(const Intern &copy)
{
    (void)copy;
    return (*this);
}

AForm *Intern::makeForm(std::string name, std::string target)
{
    AForm *form = NULL;
    for (int i = 0; i < 3; i++)
    {
        if (name == _forms[i])
        {
            form = (this->*formR[i])(target);
            std::cout << "Intern creates " << form->getName() << std::endl;
            return (form);
        }
    }
    return (form);
}

const char *Intern::FormNotFound::what() const throw()
{
    return ("Form not found");
}

AForm *Intern::makeShrubberyCreationForm(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

AForm *Intern::makeRobotomyRequestForm(std::string target)
{
    return (new RobotomyRequestForm(target));
}

AForm *Intern::makePresidentialPardonForm(std::string target)
{
    return (new PresidentialPardonForm(target));
}