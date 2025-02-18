/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:24:44 by zouddach          #+#    #+#             */
/*   Updated: 2025/02/11 14:30:53 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::~AForm () {}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm &copy) : _name(copy._name), _signed(copy._signed), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute) {}

AForm &AForm::operator=(const AForm &copy) {
	if (this != &copy) {
		
		_signed = copy._signed;
	}
	return *this;
}

std::string AForm::getName() const {
	return _name;
}

bool AForm::isSigned() const {
	return _signed;
}

int AForm::getGradeToSign() const {
	return _gradeToSign;
}

int AForm::getGradeToExecute() const {
	return _gradeToExecute;
}

void AForm::beSigned(Bureaucrat &b) {
	if (b.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	_signed = true;
}

const char *AForm::GradeTooHighException::what() const throw() {
	return "Grade is too high to execute a form";
}

const char *AForm::GradeTooLowException::what() const throw() {
	return "Grade is too low to execute a form";
}

const char *AForm::CantOpenFileException::what() const throw() {
	return "Can't create the file";
}

void AForm::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() > _gradeToExecute)
		throw GradeTooLowException();
	if (!_signed)
		throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, const AForm &Aform) {
	out << "AForm " << Aform.getName() << " is ";
	if (Aform.isSigned())
		out << "signed";
	else
		out << "not signed";
	out << " and requires grade " << Aform.getGradeToSign() << " to sign and grade " << Aform.getGradeToExecute() << " to execute";
	return out;
}

