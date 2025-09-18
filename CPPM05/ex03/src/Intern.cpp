/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 13:56:07 by lantonio          #+#    #+#             */
/*   Updated: 2025/09/18 09:39:42 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

Intern::Intern() {
	std::cout << "Intern default constructor called!" << std::endl;
}

Intern::Intern(const Intern &src) {
	(void)src;
	std::cout << "Intern default cpy constructor called!" << std::endl;
}

Intern	&Intern::operator=(const Intern &src) {
	std::cout << "Intern assignment operator called!" << std::endl;
	(void)src;
	return *this;
}

Intern::~Intern() {
	std::cout << "Intern default destructor called!" << std::endl;
}

AForm	*makeShrubbery(std::string target) {
	return new ShrubberyCreationForm(target);
}

AForm	*makeRobotomy(std::string target) {
	return new RobotomyRequestForm(target);
}

AForm	*makePresidential(std::string target) {
	return new PresidentialPardonForm(target);
}

std::string lowercase(std::string toLower) {
	for (std::string::size_type i = 0; i < toLower.size(); ++i) {
		toLower[i] = static_cast<char>(std::tolower(static_cast<unsigned char>(toLower[i])));
	}
	return toLower;
}

AForm *Intern::makeForm(std::string name, std::string target) {	
	std::string forms[3] = {"Shrubbery request", "robOTomy request", "Presidential request"};
	AForm* (*functions[3])(std::string) = {makeShrubbery, makeRobotomy, makePresidential};

	for (int i = 0; i < 3; i++) {
		if (lowercase(name) == lowercase(forms[i]))
		{
			std::cout << "Intern creates " << name << std::endl;
			return functions[i](target);
		}
	}
	std::cout << "404 | Form " << name << " not founded!\n---" << std::endl;
	throw Intern::FormNonExistent();
	return NULL;
}

const char* Intern::FormNonExistent::what() const throw() {
	return "Form not existent!";
}
