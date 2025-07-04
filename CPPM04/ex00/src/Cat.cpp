/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:17:11 by lantonio          #+#    #+#             */
/*   Updated: 2025/06/19 15:24:19 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() {
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &src) : Animal (src){
    std::cout << "Cat copy constructor called!" << std::endl;
    *this = src;
}

Cat &Cat::operator=(const Cat &src){
	std::cout << "Cat assignment constructor called!" << std::endl;
	if (this != &src)
		this->type = src.type;
	return (*this);
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}
