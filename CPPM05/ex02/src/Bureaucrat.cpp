/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 08:15:21 by lantonio          #+#    #+#             */
/*   Updated: 2025/09/18 10:25:48 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(1) {
	std::cout << "Default Bureaucrat constructor called!" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string _name, int _grade) : name(_name) {
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = _grade;
	std::cout << "Default Bureaucrat (named) constructor called!" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : name(src.name)
{
	std::cout << "Bureaucrat default cpy constructor called!" << std::endl;
	*this = src;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	std::cout << "Bureaucrat default assingment operator called!" << std::endl;
	if (this != &src)
		this->grade = src.grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Default Bureaucrat destructor called!" << std::endl;
}

std::string Bureaucrat::getName(void) const {
	return this->name;
}

int Bureaucrat::getGrade(void) const {
	return this->grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade too High!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade too Low!";
}

const char* Bureaucrat::FormNotSigned::what() const throw () {
	return "Form not signed!";
}

void	Bureaucrat::incrementGrade(void)
{
	grade--;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	//std::cout << "Bureaucrat " << getName() << " grade incremented from " << getGrade() + 1 << " to " << getGrade() << std::endl;
}

void	Bureaucrat::decrementGrade(void)
{
	grade++;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	//std::cout << "Bureaucrat " << getName() << " grade decremented from " << getGrade() - 1 << " to " << getGrade() << std::endl;
}

void	Bureaucrat::signForm(AForm &f) {
	try {
		if (f.getSigned())
			std::cout << "Form " << f.getName() << " is allready signed!" << std::endl;
		else {
			if (f.beSigned(*this))
				std::cout << this->getName() << " signed " << f.getName() << "." <<  std::endl;
			else
				std::cerr << this->getName() << " couldn't sign " << f.getName() << " because it is allready signed" << std::endl;
		}
	} catch (std::exception &e) {
		std::cerr << this->getName() << " couldn't sign " << f.getName() << " because " << e.what() << "." << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const & form) const {
	try {
		if (form.execute(*this))
			std::cout << this->getName() << " executed " << form.getName() << std::endl;
	} catch (std::exception &e) {
		std::cout << "Error: bureaucrat could not execute form because: " << e.what() << std::endl;
	}
}
