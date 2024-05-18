/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 12:08:44 by meserghi          #+#    #+#             */
/*   Updated: 2024/05/18 12:08:47 by meserghi         ###   ########.fr       */
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

	// static cmp const:
		static Fixed	max(Fixed const &a, Fixed const &b);
		static Fixed	min(Fixed const &a, Fixed const &b);

	// static cmp:
		static Fixed	max(Fixed &a, Fixed &b);
		static Fixed	min(Fixed &a, Fixed &b);

		~Fixed ( void );
};

std::ostream& operator<<(std::ostream &out, const Fixed &cp);



#endif