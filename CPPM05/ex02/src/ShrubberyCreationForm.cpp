/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 12:58:11 by lantonio          #+#    #+#             */
/*   Updated: 2025/09/18 10:42:55 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", "DefaultTarget", false, 145, 137) {
	std::cout << "ShrubberyCreationForm default constructor called!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", target, false, 145, 137) {
	std::cout << "ShrubberyCreationForm default (targeted) constructor called!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src) {
	std::cout << "ShrubberyCreationForm cpy constructor called!" << std::endl;
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

void drawAsciiTree(int height, std::ofstream &file) {
	for (int i = 0; i < height; ++i) {
		for (int j = 0; j < height - i - 1; ++j) {
			file << " ";
		}
		for (int k = 0; k < 2 * i + 1; ++k) {
			file << "*";
		}
		file << std::endl;
	}

	for (int i = 0; i < height / 3; ++i) {
		for (int j = 0; j < height - 1; ++j) {
			file << " ";
		}
		file << "|" << std::endl;
	}
}

int	ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	if (!this->getSigned())
		throw Bureaucrat::FormNotSigned();
	if (executor.getGrade() > this->getGradeToExec())
		throw Bureaucrat::GradeTooLowException();
	std::ofstream file((this->getTarget() + "_shrubbery").c_str());
	if (file)
	{
		std::cout << "File " << this->getTarget() << "_shrubbery created!" << std::endl;
		drawAsciiTree(7, file);
	}
	else
		std::cout << "Error while creating file " << this->getTarget() << "!" << std::endl;
	return 1;
}
