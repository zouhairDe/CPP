/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:49:54 by zouddach          #+#    #+#             */
/*   Updated: 2025/02/11 22:42:59 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Default_AForm", 145, 137) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target + "_AForm", 145, 137) {
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy) {
	this->_target = copy._target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy) {
	if (this != &copy) {
		this->_target = copy._target;
	}
	return *this;
}

void	ShrubberyCreationForm::doTaks() {
	std::ofstream file;
	std::string name = this->_target + "_shrubbery";
	file.open(name.c_str());
	if (!file.is_open())
		throw AForm::CantOpenFileException();
	file << "       _-_\n";
	file << "    /~~   ~~\\\n";
	file << " /~~         ~~\\\n";
	file << "{               }\n";
	file << " \\  _-     -_  /\n";
	file << "   ~  \\\\ //  ~\n";
	file << "_- -   | | _- _\n";
	file << "  _ -  | |   -_\n";
	file << "      // \\\\\n";
	file << "     //   \\\\\n";
	file << "    //     \\\\\n";
	file << "   //       \\\\\n";
	file << "  //         \\\\\n";
	file << "             \n";
	file.close();
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) {
	AForm::execute(executor);
	doTaks();
	std::cout << executor.getName() << " executed " << AForm::getName() << std::endl;
}

std::ostream &operator<<(std::ostream &out, const ShrubberyCreationForm &ShrubberyCreationForm) {
	out << "ShrubberyCreationForm " << ShrubberyCreationForm.getName() << " is ";
	if (ShrubberyCreationForm.isSigned())
		out << "signed";
	else
		out << "not signed";
	out << " and requires grade " << ShrubberyCreationForm.getGradeToSign() << " to sign and grade " << ShrubberyCreationForm.getGradeToExecute() << " to execute." << std::endl;
	return out;
}