/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 12:28:55 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/26 12:57:40 by dnantet          ###   ########.fr       */
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

Point::Point(const Point &to_copy)
{
	*this = to_copy;
}

Point::~Point()
{
}

Point &Point::operator=(const Point &to_copy)
{
	if (this != &to_copy)
	{
		*this = to_copy;
	}
	return (*this);
}
