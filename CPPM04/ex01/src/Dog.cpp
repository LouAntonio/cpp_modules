/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 10:37:00 by lantonio          #+#    #+#             */
/*   Updated: 2025/06/09 10:57:54 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(){
	std::cout << "Dog default contructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
	if (!this->brain)
	{
		std::cerr << "Memory allocation failed for Brain" << std::endl;
		exit(1);
	}
}

Dog::Dog(const Dog &src) : Animal(src) {
	this->brain = new Brain(*src.brain);
	std::cout << "Cat cpy constructor called!" << std::endl;
}

Dog &Dog::operator=(const Dog &src){
	std::cout << "Dog assignment constructor called!" << std::endl;
	if (this == &src)
		return (*this);
	Animal::operator=(src);
	delete brain;
	brain = new Brain(*src.brain);
	return (*this);
}

void Dog::makeSound() const{
	std::cout << "Ruff!" << std::endl;
}

void Dog::setIdea(int i, std::string idea) {
	if (brain)
		brain->setIdea(i, idea);
}

std::string Dog::getIdea(int i) const{
	return brain ? brain->getIdea(i) : "";
}

Dog::~Dog(){
	this->brain->~Brain();
	delete this->brain;
	std::cout << "Dog default destructor called" << std::endl;
}
