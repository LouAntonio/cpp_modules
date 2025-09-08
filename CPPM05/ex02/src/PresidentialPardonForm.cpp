/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 12:05:51 by lantonio          #+#    #+#             */
/*   Updated: 2025/09/08 09:06:26 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm() {
	std::cout << "PresidentialPardonForm default constructor called!" << std:: endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", target, 25, 5) {
	std::cout << "PresidentialPardonForm default (named) constructor called!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm(src) {
	std::cout << "PresidentialPardonForm cpy constructor called!" << std::endl;
	*this = src;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src) {
	std::cout << "PresidentialPardonForm assignment operator called!" << std::endl;
	if (this != &src) {
		this->name = src.name;
		this->target = src.target;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm default destructor called!" << std::endl;
}

void    PresidentialPardonForm::execute(void) {
    std::cout << target << "has been pardoned by Zaphod Beeblebrox." << std::endl;
}
