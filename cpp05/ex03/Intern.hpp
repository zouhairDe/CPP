/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 19:18:35 by zouddach          #+#    #+#             */
/*   Updated: 2025/02/12 19:39:50 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern;
typedef AForm *(Intern::*forms)(std::string);

class Intern
{
    private:
        static std::string  _forms[3];
        static  forms       formR[3];
        AForm *makeShrubberyCreationForm(std::string target);
        AForm *makeRobotomyRequestForm(std::string target);
        AForm *makePresidentialPardonForm(std::string target);
        
    public:
        Intern();
        Intern(const Intern &copy);
        ~Intern();
        Intern &operator=(const Intern &copy);

        AForm *makeForm(std::string name, std::string target);

        class FormNotFound : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};



#endif