/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 12:28:55 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/26 15:36:23 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/* CONSTRUCTORS */

Point::Point() : _x(0), _y(0)
{
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
}

Point::Point(const Point &to_copy) : _x(to_copy._x), _y(to_copy._y)
{
}

Point::~Point()
{
}

Point &Point::operator=(const Point &to_copy)
{
	(void)to_copy;
	return (*this);
}

/* GETTERS */

Fixed Point::get_x() const
{
	return (this->_x);
}

Fixed Point::get_y() const
{
	return (this->_y);
}
