/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 10:37:00 by lantonio          #+#    #+#             */
/*   Updated: 2025/06/18 11:38:04 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(){
	std::cout << "Dog default contructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &src) : Animal (src) {
	std::cout << "Dog copy constructor called!" <<std::endl;
}

Dog &Dog::operator=(const Dog &src) {
	std::cout << "Dog assignment constructor called!" <<std::endl;
	if (this != &src)
		this->type = src.type;
	return *this;
}

Dog::~Dog(){
	std::cout << "Dog default destructor called" << std::endl;
}

void Dog::makeSound() const{
	std::cout << "Ruff!" << std::endl;
}
