/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 10:55:42 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/26 13:13:35 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {
private:
	const Fixed _x;
	const Fixed _y;

public:
	/* CONSTRUCTORS */

	Point();
	Point(const float x, const float y);
	Point(const Point &to_copy);
	~Point();

	Point	&operator=(const Point &to_copy);

	/* GETTERS */

	Fixed get_x() const;
	Fixed get_y() const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
