/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 12:58:11 by lantonio          #+#    #+#             */
/*   Updated: 2025/09/08 09:57:18 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", "DefaultTarget", false, 145, 137) {
	std::cout << "ShrubberyCreationForm default constructor called!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", target, false, 145, 137) {
	std::cout << "ShrubberyCreationForm default (named) constructor called!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src) {
	std::cout << "ShrubberyCreationForm cpy constructor called!" << std::endl;
	*this = src;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src) {
	std::cout << "ShrubberyCreationForm assignment operator called!" << std::endl;
	if (this != &src)
		AForm::operator=(src);
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm destructor called!" << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	if (!this->getSigned())
	{
		std::cout << "Error, Form not signed!" << std::endl:
		return:
	}
	if (executor.getGrade() > this->getGradeToExec())
		Bureaucrat::GradeTooLowException();
	std::cout << "File " << this->getTarget() << " created!" << std::endl;
}
