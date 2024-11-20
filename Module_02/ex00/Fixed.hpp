/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:44:14 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/08 11:12:01 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed
{
	private :
		int					_raw;
		static const int	_fraction;
	public :
		Fixed ( void );
		Fixed ( const Fixed &cp );
		Fixed &operator=( const Fixed &cp);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		~Fixed ( void );
};

#endif