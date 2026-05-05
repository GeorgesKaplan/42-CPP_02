/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 10:55:47 by dnantet           #+#    #+#             */
/*   Updated: 2026/05/05 10:42:40 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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

Fixed::Fixed()
{
	std::cout << "Default constructor called." << std::endl;
	this->_fixed = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called." << std::endl;
}

Fixed::Fixed(const Fixed &to_copy)
{
	std::cout << "Copy constructor called." << std::endl;
	this->_fixed = to_copy.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &to_copy)
{
	std::cout << "Copy assignment operator called." << std::endl;
	if (this != &to_copy)
	{
		this->_fixed = to_copy.getRawBits();
	}
	return (*this);
}
