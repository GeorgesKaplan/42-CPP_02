/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 10:55:45 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/26 12:35:14 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
	Fixed a;
	a = Fixed(1234.4321f);
	Fixed const b(10.0f);
	Fixed const c = b;
	Fixed d = a - 1000;
	Fixed const e(1.0f);
	Fixed f = 0.0f;

	std::cout << "VARIABLES INITIALISATION" << std::endl;
	std::cout << "a = " << a << "\nb = " << b << "\nc = " << c << std::endl;
	std::cout << std::endl;
	std::cout << "LOGICAL OPERATORS" << std::endl;
	std::cout << "Is  a > b : " << (a > b) << std::endl;
	std::cout << "Is  a < b : " << (a < b) << std::endl;
	std::cout << "Is b >= c : " << (b >= c) << std::endl;
	std::cout << "Is b <= c : " << (b <= c) << std::endl;
	std::cout << "Is a == c : " << (a == c) << std::endl;
	std::cout << "Is a != c : " << (a != c) << std::endl;
	std::cout << std::endl;
	std::cout << "ARITHMETIC OPERATORS" << std::endl;
	std::cout << "a + b = " << (a + b) << std::endl;
	std::cout << "a - b = " << (a - b) << std::endl;
	std::cout << "a * b = " << (a * b) << std::endl;
	std::cout << "a / b = " << (a / b) << std::endl;
	std::cout << std::endl;
	std::cout << "INCREMENT / DECREMENT" << std::endl;
	std::cout << " f  = " << f << std::endl;
	std::cout << "f++ = " << (f++) << std::endl;
	std::cout << " f  = " << f << std::endl;
	std::cout << "++f = " << (++f) << std::endl;
	std::cout << " f  = " << f << std::endl;
	std::cout << "f-- = " << (f--) << std::endl;
	std::cout << " f  = " << f << std::endl;
	std::cout << "--f = " << (--f) << std::endl;
	std::cout << " f  = " << f << std::endl;
	std::cout << std::endl;
	std::cout << "MIN / MAX" << std::endl;
	std::cout << "a = " << a << " | d = " << d << std::endl;
	std::cout << "b = " << b << " | e = " << e << std::endl;
	std::cout << "min(a, d) = " << Fixed::min(a, d) << std::endl;
	std::cout << "min(b, e) = " << Fixed::min(b, e) << std::endl;
	std::cout << "max(a, d) = " << Fixed::max(a, d) << std::endl;
	std::cout << "max(b, e) = " << Fixed::max(b, e) << std::endl;

	return (0);
}
