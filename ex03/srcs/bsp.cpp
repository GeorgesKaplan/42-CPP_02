/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 12:29:08 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/26 14:04:09 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed crossProd(Point const p1, Point const p2, Point const p3)
{
	return	((p2.get_x() - p1.get_x()) * (p3.get_y() - p1.get_y())
		   - (p2.get_y() - p1.get_y()) * (p3.get_x() - p1.get_x()));
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed d1 = crossProd(a, b, point);
	Fixed d2 = crossProd(b, c, point);
	Fixed d3 = crossProd(c, a, point);
	std::cout << "d1 = " << d1 << " | d2 = " << d2 << " | d3 = " << d3 << std::endl;

	bool is_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	bool is_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);
	bool is_zero = (d1 == 0) || (d2 == 0) || (d3 == 0);

	if (is_zero)
		return (false);
	return !(is_neg && is_pos);
}

