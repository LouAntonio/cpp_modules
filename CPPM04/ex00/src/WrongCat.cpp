/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 12:44:11 by lantonio          #+#    #+#             */
/*   Updated: 2025/06/20 13:10:38 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(){
	std::cout << "WrongCat default contructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src) {
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat  &WrongCat::operator=(const WrongCat &src) {
    std::cout << "WrongCat assignment operator called" << std::endl;
    if (this != &src)
        this->type = src.type;
    return *this;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat default destructor called" << std::endl;
}

void WrongCat::makeSound() const{
    std::cout << "Generic WrongCat sound!" << std::endl;
}
