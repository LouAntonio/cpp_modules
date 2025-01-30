/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 09:53:45 by lantonio          #+#    #+#             */
/*   Updated: 2025/01/29 10:48:05 by lantonio         ###   ########.fr       */
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


bool Fixed::operator>(const Fixed &fixed) const
{
	return (this->value > fixed.value);
}

bool Fixed::operator<(const Fixed &fixed) const
{
	return (this->value < fixed.value);
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	return (this->value >= fixed.value);
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	return (this->value <= fixed.value);
}

bool Fixed::operator==(const Fixed &fixed) const
{
	return (this->value == fixed.value);
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	return (this->value != fixed.value);
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
	Fixed result;

	result.value = this->value + fixed.value;
	return (result);
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
	Fixed result;

	result.value = this->value - fixed.value;
	return (result);
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
	Fixed result;

	result.value = (static_cast<long>(this->value) * fixed.value) >> 8;
	return (result);
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
	Fixed result;

	result.value = (static_cast<long>(this->value) << 8) / fixed.value;
	return (result);
}

Fixed &Fixed::operator++(void)
{
	this->value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);

	this->value++;
	return (tmp);
}

Fixed &Fixed::operator--(void)
{
	this->value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);

	this->value--;
	return (tmp);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}
