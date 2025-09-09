/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 11:35:37 by lantonio          #+#    #+#             */
/*   Updated: 2025/09/08 16:35:48 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", "DefaultTarget", false, 72, 45) {
	std::cout << "RobotomyRequestForm default constructor called!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", target, false, 72, 45) {
	std::cout << "RobotomyRequestForm default (named) constructor called!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src) {
	std::cout << "RobotomyRequestForm cpy constructor called!" << std::endl;
	*this = src;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src) {
	std::cout << "RobotomyRequestForm assignment operator called!" << std::endl;
	if (this != &src)
		AForm::operator=(src);
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm default destructor called!" << std::endl;
}


void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	if (!this->getSigned())
	{
		std::cout << "Error, Form not signed!" << std::endl;
		return;
	}
	if (executor.getGrade() > this->getGradeToExec())
		throw Bureaucrat::GradeTooLowException();

	std::srand(std::time(NULL));

	int choice = std::rand() % 2;
	if (choice) {
		std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
	} else {
		std::cout << "Failed to robotomize " <<  this->getTarget() << std::endl;
	}
}
