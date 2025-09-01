/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 08:15:21 by lantonio          #+#    #+#             */
/*   Updated: 2025/09/01 09:37:42 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(1) {
	std::cout << "Default Bureaucrat constructor called!" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string _name, int _grade) : name(_name) {
	try
	{
		if (_grade < 1)
			std::cout << "Grade to hight!" << std::endl;    
		else if (_grade > 150)
			std::cout << "Grade to low!" << std::endl;
		this->grade = _grade;
		std::cout << "Default Bureaucrat (named) constructor called!" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	std::cout << "Bureaucrat default cpy constructor called!" << std::endl;
	*this = src;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
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

int Bureaucrat::getGrade(void)
{
	return this->grade;
}

void Bureaucrat::incrementGrade(void)
{
	std::cout << "Increment!" << std::endl;
}

void Bureaucrat::decrementGrade(void)
{
	std::cout << "Decrement!" << std::endl;
}
