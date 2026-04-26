/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 10:55:42 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/26 12:04:28 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
private:
	int					_fixed;
	static const int	_fractBits = 8;

public:
	/* CONSTRUCTORS */

	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	Fixed(const Fixed &to_copy);
	~Fixed();

	/* SETTERS AND GETTERS */

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	/* CONVERTERS */

	float	toFloat(void) const;
	int		toInt(void) const;

	/* OPERATORS */

	Fixed	&operator=(const Fixed &to_copy);

	bool operator>(const Fixed &operand) const;
	bool operator<(const Fixed &operand) const;
	bool operator>=(const Fixed &operand) const;
	bool operator<=(const Fixed &operand) const;
	bool operator==(const Fixed &operand) const;
	bool operator!=(const Fixed &operand) const;

	Fixed operator+(const Fixed &operand) const;
	Fixed operator-(const Fixed &operand) const;
	Fixed operator*(const Fixed &operand) const;
	Fixed operator/(const Fixed &operand) const;

	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);

	/* FUNCTIONS */
	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);
};

/* OVERLOAD */

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
