/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 12:10:30 by meserghi          #+#    #+#             */
/*   Updated: 2024/05/18 17:29:29 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point ( void ) : _x(0), _y(0)
{

}

Point::Point ( float const a, float const b ) : _x(a), _y(b)
{

}

Point::Point ( Point const &a) : _x(a._x), _y(a._y)
{

}

Point &Point::operator=( Point const &a )
{
	(Fixed)_x = a._x;
	(Fixed)_y = a._y;
	return (*this);
}

int	Point::CalArea(Point const &a, Point const &b, Point const &c)
{
	float	div;

	div = ((Fixed)a._x * ((Fixed)b._y - c._y) + (Fixed)b._x* (Fixed)((Fixed)c._y - a._y) + (Fixed)c._x * (Fixed)((Fixed)a._y - b._y)).toFloat();
	return (abs(div / 2));
}

Point::~Point( void )
{

}