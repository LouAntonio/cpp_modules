/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 12:58:11 by lantonio          #+#    #+#             */
/*   Updated: 2025/09/04 13:18:54 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm() {
	std::cout << "ShrubberyCreationForm default constructor called!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _name, std::string target) : AForm(_name, target, 145, 137) {
	std::cout << "ShrubberyCreationForm default (named) constructor called!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src) {
	std::cout << "ShrubberyCreationForm cpy constructor called!" << std::endl;
	*this = src;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src) {
	std::cout << "ShrubberyCreationForm assignment operator called!" << std::endl;
	if (this != &src) {
		this->name = src.name;
		this->target = src.target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm destructor called!" << std::endl;
}

void    ShrubberyCreationForm::execute(void) {
	std::cout << "File " << target << " created!" << std::endl;
}
