/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:44:10 by meserghi          #+#    #+#             */
/*   Updated: 2024/05/15 21:23:19 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed ( void )
{
	std::cout << "Default constructor called\n";
	_raw = 0;
}

Fixed::~Fixed ( void )
{
	std::cout << "Destructor called\n";
}

int	Fixed::getRawBits( void )
{
	std::cout << "getRawBits member function called\n";
	return (_raw);
}

void	Fixed::setRawBits ( int const raw )
{
	_raw = raw;
}

Fixed::Fixed ( class Fixed &cp )
{
	std::cout << "Copy constructor called\n";
	_raw = cp.getRawBits();
}

class Fixed	&Fixed::operator=( class Fixed &cp)
{
	std::cout << "Copy assignment operator calle\n";
	_raw = cp.getRawBits();
	return (cp);
}