/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:17:11 by lantonio          #+#    #+#             */
/*   Updated: 2025/06/20 13:09:32 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() {
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &src) : Animal(src) {
	this->brain = new Brain(*src.brain);
	std::cout << "Cat copy constructor called!" << std::endl;
}

Cat &Cat::operator=(const Cat &src){
	std::cout << "Cat assignment constructor called!" << std::endl;
	if (this == &src)
		return (*this);
	Animal::operator=(src);
	delete brain;
	brain = new Brain(*src.brain);
	return (*this);
}

Cat::~Cat() {
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}

void Cat::setIdea(int i, std::string idea){
	if (brain)
		brain->setIdea(i, idea);
}

std::string Cat::getIdea(int i) const{
	return brain ? brain->getIdea(i) : "";
}

