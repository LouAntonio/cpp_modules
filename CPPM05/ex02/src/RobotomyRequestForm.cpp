/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 11:35:37 by lantonio          #+#    #+#             */
/*   Updated: 2025/09/08 09:41:29 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"
#include <random>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", "DefaultTarget", false, 72, 137) {
	std::cout << "RobotomyRequestForm default constructor called!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", target, false, 72, 137) {
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

void	RobotomyRequestForm::execute(void) {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_real_distribution<> dist(0, 1);

	int choice = dist(gen);
	if (choice) {
		std::cout << this->getSigned() << " has been robotomized successfully" << std::endl;
	} else {
		std::cout << "Failed to robotomize " <<  this->getSigned() << std::endl;
	}
}
