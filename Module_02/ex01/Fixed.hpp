/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 21:30:47 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/08 11:17:47 by meserghi         ###   ########.fr       */
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
		static const int	_fraction;
	public :
		Fixed ( void );
		Fixed ( int const &nb );
		Fixed ( float const &nb );
		Fixed ( Fixed const &nb );
		float toFloat( void ) const;
		int toInt( void ) const;
		Fixed& operator=(const Fixed &cp);
		~Fixed ( void );
};

std::ostream& operator<<(std::ostream &out, const Fixed &cp);

#endif