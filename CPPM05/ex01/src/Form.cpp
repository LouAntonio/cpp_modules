/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 09:54:53 by lantonio          #+#    #+#             */
/*   Updated: 2025/09/18 10:17:49 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

Form::Form() : name("Default"), _signed(false), grade_to_sign(2), grade_to_exec(1) {
	std::cout << "Form default constructor called!" << std::endl;
}

Form::Form(std::string _name, bool is_signed, int to_sign, int to_exec) : name(_name), grade_to_sign(to_sign), grade_to_exec(to_exec) {
	if (grade_to_sign < 1 || grade_to_exec < 1)
		throw Form::GradeTooHighException();
	if (grade_to_sign > 150 || grade_to_exec > 150)
		throw Form::GradeTooLowException();
	_signed = is_signed;
	std::cout << "Form default (named) constructor called!" << std::endl;
}

Form::Form(const Form &src) : name(src.name), grade_to_sign(src.grade_to_sign), grade_to_exec(src.grade_to_exec) {
	std::cout << "Form default cpy constructor called!" << std::endl;
	*this = src;
}

Form &Form::operator=(const Form &src)
{
	std::cout << "Form  assignment operator called!" << std::endl;
	if (this != &src)
		this->_signed = src._signed;
	return *this;
}

Form::~Form() {
	std::cout << "Form default destructor called!" << std::endl;
}

std::string Form::getName(void) const {
	return name;
}

bool Form::getSigned(void) const {
	return _signed;
}

int Form::getGradeToSign(void) const {
	return grade_to_sign;
}

int Form::getGradeToExec(void) const {
	return grade_to_exec;
}

int Form::beSigned(Bureaucrat &b) {
	if (b.getGrade() <= grade_to_sign)
	{
		if (_signed)
			return 0;
		_signed = true;
		return 1;
	} else {
		throw Form::GradeTooLowException();
	}
	return 0;
}

const char* Form::GradeTooHighException::what() const throw() {
	return "Error: Grade too High!";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Error: Grade too Low!";
}

std::ostream &operator<<(std::ostream &outputStream, const Form &f)
{
	outputStream << "Form " << f.getName() << " is " << f.getSigned() << " to signed, need grade " << f.getGradeToSign() << " or higher to bee signed, and grade " << f.getGradeToExec() << " or higher to be executed!";
	return outputStream;
}
