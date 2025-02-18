/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:32:20 by zouddach          #+#    #+#             */
/*   Updated: 2025/02/12 18:08:26 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat b("b", 136);
		ShrubberyCreationForm f("a7a");
		std::cout << b << f;
		b.signForm(f);
		f.execute(b);
		Bureaucrat b2("b2", 45);
		RobotomyRequestForm ff("a7a");
		std::cout << b2 << ff;
		b2.signForm(ff);
		ff.execute(b2);
		Bureaucrat b3("b3", 5);
		PresidentialPardonForm fff("a7a");
		std::cout << b3 << fff;
		b3.signForm(fff);
		fff.execute(b3);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}