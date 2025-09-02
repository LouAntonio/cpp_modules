/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 09:54:53 by lantonio          #+#    #+#             */
/*   Updated: 2025/09/02 11:07:23 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

Form::Form() : name("Default"), _signed(false), grade_to_sign(2), grade_to_exec(1) {
	std::cout << "Form default constructor called!";
}

Form::Form(std::string _name, bool is_signed, int to_sign, int to_exec) : name(_name), grade_to_sign(to_sign), grade_to_exec(to_exec) {
	if (grade_to_sign < 1 || grade_to_exec < 1)
		throw Form::GradeTooHighException();
	if (grade_to_sign > 150 || grade_to_exec > 150)
		throw Form::GradeTooLowException();
	_signed = is_signed;
}

Form::Form(const Form &src) : name(src.name), grade_to_sign(src.grade_to_sign), grade_to_exec(src.grade_to_exec) {
	std::cout << "Form default cpy constructor called!";
	*this = src;
}

Form &Form::operator=(const Form &src)
{
	std::cout << "Form  assignment operator called!";
	if (this != &src)
		this->_signed = src._signed;
	return *this;
}

Form::~Form() {
	std::cout << "Form default destructor called!";
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

void Form::beSigned(Bureaucrat &b) {
	if (b.getGrade() <= grade_to_sign)
	{
		if (_signed)
		{
			std::cout << "Form allready signed!";
			return ;
		}
		_signed = true;
	} else {
		throw Form::GradeTooLowException();
	}
}

const char* Form::GradeTooHighException::what() const throw() {
	return "Error: Grade too High!";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Error: Grade too Low!";
}

