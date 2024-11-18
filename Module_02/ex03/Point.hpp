/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 12:21:47 by meserghi          #+#    #+#             */
/*   Updated: 2024/05/18 17:13:53 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class	Point
{
	private :
		Fixed const _x;
		Fixed const _y;
	public :
		Point ( void );
		Point ( float const a, float const b );
		Point ( Point const &a );
		static int	CalArea(Point const &a, Point const &b, Point const &c);
		Point &operator=( Point const &a );
		~Point ( void );
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif