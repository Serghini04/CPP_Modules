/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:28:34 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/08 13:55:45 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

// Solution:
// Let the coordinates of the three corners be (x1, y1), (x2, y2), and (x3, y3). And coordinates of the given point P be (x, y)
// 	1/ Calculate the area of the given triangle, i.e., the area of the triangle ABC in the above diagram.
// 			Area A = [ x1(y2 – y3) + x2(y3 – y1) + x3(y1-y2)]/2
// 	2/ Calculate the area of the triangle PAB. We can use the same formula for this. Let this area be A1.
// 	3/ Calculate the area of the triangle PBC. Let this area be A2.
// 	4/ Calculate the area of the triangle PAC. Let this area be A3.
// 	If P lies inside the triangle, then A1 + A2 + A3 must be equal to A.


bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	int A = Point::CalArea(a, b, c);
	int A1 = Point::CalArea(point, a, b);
	int A2 = Point::CalArea(point, b, c);
	int A3 = Point::CalArea(point, a, c);
	if (!A1 || !A2 || !A3)
		return (false);
	if (A1 + A2 + A3 == A)
		return (true);
	return (false);
}
