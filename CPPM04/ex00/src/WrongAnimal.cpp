/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 12:34:34 by lantonio          #+#    #+#             */
/*   Updated: 2025/06/19 15:07:45 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) : type(src.type) {
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal  &WrongAnimal::operator=(const WrongAnimal &src) {
    std::cout << "Animal assignment operator called" << std::endl;
    if (this != &src)
        this->type = src.type;
    return *this;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal default destructor called" << std::endl;
}

void WrongAnimal::makeSound() const{
    std::cout << "Generic WrongAnimal sound!" << std::endl;
}

std::string WrongAnimal::getType() const {
    return this->type;
}
