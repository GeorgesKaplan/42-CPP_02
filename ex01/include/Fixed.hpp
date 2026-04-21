/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 10:55:42 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/21 12:42:58 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
private:
	int					_fixed;
	static const int	_fractBits = 8;

public:
	int getRawBits(void);
	void setRawBits(int const raw);

	Fixed();
	~Fixed();
	Fixed(const int num);
	Fixed(const float num);
	Fixed(const Fixed &to_copy);

	Fixed &operator=(const Fixed &to_copy);
};

#endif
