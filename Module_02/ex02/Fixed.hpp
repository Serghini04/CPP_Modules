/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 12:03:14 by meserghi          #+#    #+#             */
/*   Updated: 2024/05/17 16:29:15 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
class	Fixed
{
	private :
		int					_raw;
		static const int	_fraction = 8;
	public :
		Fixed ( void );
		Fixed ( int const &nb );
		Fixed ( float const &nb );
		Fixed ( Fixed const &nb );

	// 6 comparison operators :
		bool	operator>(const Fixed &a);
		bool	operator>=(const Fixed &a);
		bool	operator<(const Fixed &a);
		bool	operator<=(const Fixed &a);
		bool	operator==(const Fixed &a);
		bool	operator!=(const Fixed &a);

	// 4 arihmetic operators :
		Fixed	operator+(const Fixed &a);
		Fixed	operator-(const Fixed &a);
		Fixed	operator*(const Fixed &a);
		Fixed	operator/(const Fixed &a);

	// post- :
		Fixed	&operator++( int );
		Fixed	&operator--( int );

	// pre- :
		Fixed	&operator++( void );
		Fixed	&operator--( void );

		int toInt ( void ) const;
		float toFloat ( void ) const;
		Fixed& operator=(const Fixed &cp);

	// static cmp :

		;

		~Fixed ( void );
};

std::ostream& operator<<(std::ostream &out, const Fixed &cp);



#endif