/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 10:55:42 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/21 11:12:52 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {
private:
	int					_fixed;
	static const int	_fractBits = 8;

public:
	int getRawBits(void);
	void setRawBits(int const raw);

	Fixed();
	~Fixed();
	Fixed(const Fixed &to_copy);
	Fixed &operator=(const Fixed &to_copy);
};

#endif
