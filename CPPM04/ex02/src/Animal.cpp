/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 11:56:01 by lantonio          #+#    #+#             */
/*   Updated: 2025/06/09 12:05:09 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &src) : type(src.type) {
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

Animal &Animal::operator=(const Animal &src) {
    std::cout << "Animal assignment operator called" << std::endl;
    if (this != &src) {
        this->type = src.type;
    }
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const {
    return this->type;
}
