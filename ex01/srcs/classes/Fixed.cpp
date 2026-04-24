/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 10:55:47 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/24 12:02:13 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* CONSTRUCTORS */

Fixed::Fixed()
{
	std::cout << "Default constructor called." << std::endl;
	this->_fixed = 0;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called." << std::endl;
	this->_fixed = num << this->_fractBits;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called." << std::endl;
	this->_fixed = roundf(num * (1 << this->_fractBits));
}

Fixed::Fixed(const Fixed &to_copy)
{
	std::cout << "Copy constructor called." << std::endl;
	this->_fixed = to_copy._fixed;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called." << std::endl;
}

/* SETTERS AND GETTERS */

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called." << std::endl;
	return (this->_fixed);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called." << std::endl;
	this->_fixed = raw;
}

/* OPERATORS */

Fixed &Fixed::operator=(const Fixed &to_copy)
{
	std::cout << "Copy assignment operator called." << std::endl;
	if (this != &to_copy)
	{
		this->_fixed = to_copy._fixed;
	}
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}

/* CONVERTERS */

int Fixed::toInt(void) const // Shift to the right -> remove fractional part
{
	return (this->_fixed >> this->_fractBits);
}

float Fixed::toFloat(void) const // Divide by 256 -> 2^_fractBits -> shift to the left
{
	return (float(this->_fixed) / (1 << this->_fractBits));
}
