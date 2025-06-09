/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:17:11 by lantonio          #+#    #+#             */
/*   Updated: 2025/06/09 10:58:07 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() {
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
	if (!this->brain) {
		std::cerr << "Memory allocation failed for Brain" << std::endl;
		exit(1);
	}
}

Cat::Cat(const Cat &src) : Animal(src) {
	this->brain = new Brain(*src.brain);
	std::cout << "Cat cpy constructor called NEW!" << std::endl;
}

Cat &Cat::operator=(const Cat &src){
	std::cout << "Cat assignment constructor called!" << std::endl;
	if (this == &src)
	{
		std::cout << "Retornando2" << std::endl;
		return (*this);
	}
	Animal::operator=(src);
	delete brain;
	brain = new Brain(*src.brain);
	return (*this);
}

Cat::~Cat() {
	this->brain->~Brain();
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::setIdea(int i, std::string idea){
	if (brain)
		brain->setIdea(i, idea);
}

std::string Cat::getIdea(int i) const{
	return brain ? brain->getIdea(i) : "";
}

void Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}
