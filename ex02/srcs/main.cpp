/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 10:55:45 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/24 16:15:15 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	a = Fixed(1234.4321f);
	Fixed const b(10.0f);
	Fixed const c = b;

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

	return (0);
}
