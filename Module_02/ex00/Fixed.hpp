/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:44:14 by meserghi          #+#    #+#             */
/*   Updated: 2024/05/15 19:06:35 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed
{
	private :
		int					_raw;
		static const int	_fraction = 8;
	public :
		Fixed ( void );
		Fixed ( class Fixed &cp );
		class Fixed &operator=( class Fixed &cp);
		int getRawBits( void );
		void setRawBits( int const raw );
		~Fixed ( void );
};

#endif