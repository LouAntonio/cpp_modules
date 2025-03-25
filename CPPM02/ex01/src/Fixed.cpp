/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 12:15:26 by lantonio          #+#    #+#             */
/*   Updated: 2025/03/24 11:57:08 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = fixed.value;
	return (*this);
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}



Fixed::Fixed(const int toConvert) {
	std::cout << "Int constructor called" << std::endl;
    this->value = toConvert << 8;
}

Fixed::Fixed(const float toConvert) {
	std::cout << "Float constructor called" << std::endl;
    this->value = static_cast<int>(roundf(toConvert * (1 << 8)));
}

float Fixed::toFloat(void) const {
    return (static_cast<float>(this->value) / (1 << 8));
}

int Fixed::toInt(void) const {
    return (this->value >> 8);
}

std::ostream &operator<<(std::ostream &outputStream, const Fixed &object)
{
	outputStream << object.toFloat();
	return (outputStream);
}
