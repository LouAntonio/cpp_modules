/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 11:50:44 by lantonio          #+#    #+#             */
/*   Updated: 2025/09/08 09:01:57 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"

AForm::AForm() : to_sign(1), to_exec(1), name("Default"), target("target") {
	std::cout << "AForm default constructor called!";
}

AForm::AForm(std::string _name, std::string _target, int _to_sign, int _to_exec) : to_sign(_to_sign), to_exec(_to_exec) {
	name = _name;
	target = _target;
	std::cout << "AForm default (named) constructor called!";
}

AForm::AForm(const AForm &src) : to_sign(src.to_sign), to_exec(src.to_exec) {
	std::cout << "AForm cpy constructor called!";
	*this = src;
}

AForm &AForm::operator=(const AForm &src) {
	if (this != &src)
	{
		this->name = src.name;
		this->target = src.target;
	}
	return *this;
}

AForm::~AForm() {
	std::cout << "AForm default destructor called!";
}


std::string	AForm::getName(void) const {
	return name;
}

std::string	AForm::getTarget(void) const {
	return target;
}

int	AForm::getGradeToSign(void) const {
	return to_sign;
}

int	AForm::getGradeToExec(void) const {
	return to_exec;
}
