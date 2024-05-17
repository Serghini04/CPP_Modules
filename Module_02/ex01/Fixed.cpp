/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 21:33:49 by meserghi          #+#    #+#             */
/*   Updated: 2024/05/17 11:53:02 by meserghi         ###   ########.fr       */
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


Fixed::Fixed ( int const &nb )
{
	std::cout << "Int constructor called\n";
	// 8 is 256 : nb * 256;
	_raw = nb << _fraction;
}

Fixed::Fixed ( float const &nb )
{
	std::cout << "Float constructor called\n";
	// this (1 << _fraction) like 2 ^ _fraction and you can't left shift for float number.
	_raw = std::roundf(nb * (1 << _fraction));
}

float Fixed::toFloat( void ) const
{
	return (static_cast<float>(_raw) / (1 << _fraction));
}

int Fixed::toInt( void ) const
{
	return (_raw >> _fraction);
}

Fixed::Fixed ( Fixed const &nb )
{
	std::cout << "Copy constructor called\n";
	*this = nb;
}

std::ostream& operator<<(std::ostream &out, const Fixed &cp)
{
	out << cp.toFloat();
	return (out);
}

Fixed& Fixed::operator=(const Fixed &cp)
{
	std::cout << "Copy assignment operator called\n";
	_raw = cp._raw;
    return (*this);
}