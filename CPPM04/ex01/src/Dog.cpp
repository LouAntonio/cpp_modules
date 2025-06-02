/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 10:37:00 by lantonio          #+#    #+#             */
/*   Updated: 2025/05/21 11:36:24 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(){
	std::cout << "Dog default contructor called" << std::endl;
	this->type = "Dog";
}

Dog::~Dog(){
	std::cout << "Dog default destructor called" << std::endl;
}

void Dog::makeSound() const{
	std::cout << "Ruff!" << std::endl;
}
