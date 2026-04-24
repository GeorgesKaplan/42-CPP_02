/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 10:55:42 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/24 11:37:39 by dnantet          ###   ########.fr       */
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

	int		getRawBits(void);
	void	setRawBits(int const raw);

	/* CONVERTERS */

	float	toFloat(void) const;
	int		toInt(void) const;

	/* OPERATORS */

	Fixed	&operator=(const Fixed &to_copy);
};

#endif
