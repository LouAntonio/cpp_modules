/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 09:54:53 by lantonio          #+#    #+#             */
/*   Updated: 2025/09/08 09:19:45 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"

AForm::AForm() : name("Default"), target("default"), _signed(false), to_sign(2), to_exec(1) {
	std::cout << "AForm default constructor called!" << std::endl;
}

AForm::AForm(std::string _name, std::string _target, bool is_signed, int to_sign, int to_exec) : name(_name), target(_target), to_sign(to_sign), to_exec(to_exec) {
	if (to_sign < 1 || to_exec < 1)
		throw AForm::GradeTooHighException();
	if (to_sign > 150 || to_exec > 150)
		throw AForm::GradeTooLowException();
	_signed = is_signed;
	std::cout << "AForm default (targeted) constructor called!" << std::endl;
}

AForm::AForm(const AForm &src) : name(src.name), target(src.target), _signed(src._signed), to_sign(src.to_sign), to_exec(src.to_exec) {
	std::cout << "AForm default cpy constructor called!" << std::endl;
}

AForm &AForm::operator=(const AForm &src)
{
	std::cout << "AForm  assignment operator called!" << std::endl;
	if (this != &src)
		this->_signed = src._signed;
	return *this;
}

AForm::~AForm() {
	std::cout << "AForm default destructor called!" << std::endl;
}

std::string AForm::getName(void) const {
	return name;
}

std::string AForm::getTarget(void) const {
	return target;
}

bool AForm::getSigned(void) const {
	return _signed;
}

int AForm::getGradeToSign(void) const {
	return to_sign;
}

int AForm::getGradeToExec(void) const {
	return to_exec;
}

void AForm::beSigned(Bureaucrat &b) {
	if (b.getGrade() <= to_sign)
	{
		if (_signed)
		{
			std::cout << "Form " << this->getName() << " allready signed!" << std::endl;
			return ;
		}
		_signed = true;
	} else {
		throw AForm::GradeTooLowException();
	}
}

const char* AForm::GradeTooHighException::what() const throw() {
	return "Error: Grade too High!";
}

const char* AForm::GradeTooLowException::what() const throw() {
	return "Error: Grade too Low!";
}

std::ostream &operator<<(std::ostream &outputStream, const AForm &f)
{
	outputStream << "Form " << f.getName() << " target is " << f.getTarget() << ", is " << f.getSigned() << " to signed, need grade " << f.getGradeToSign() << " or higher to bee signed, and grade " << f.getGradeToExec() << " or higher to be executed!";
	return outputStream;
}
