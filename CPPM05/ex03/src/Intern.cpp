/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 13:56:07 by lantonio          #+#    #+#             */
/*   Updated: 2025/09/18 09:18:26 by lantonio         ###   ########.fr       */
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

AForm *Intern::makeForm(std::string name, std::string target) {	
	std::string forms[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	AForm* (*functions[3])(std::string) = {makeShrubbery, makeRobotomy, makePresidential};

	for (int i = 0; i < 3; i++) {
		if (name == forms[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			return functions[i](target);
		}
	}
	std::cout << "404\nForm " << name << " not founded!" << std::endl;
	return NULL;
}
