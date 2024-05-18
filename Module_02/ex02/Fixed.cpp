/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 12:03:35 by meserghi          #+#    #+#             */
/*   Updated: 2024/05/18 11:12:04 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed ( void )
{
	// std::cout << "Default constructor called\n";
	_raw = 0;
}

Fixed::~Fixed ( void )
{
	// std::cout << "Destructor called\n";
}

Fixed::Fixed ( int const &nb )
{
	// std::cout << "Int constructor called\n";
	// 8 is 256 : nb * 256;
	_raw = nb << _fraction;
}

Fixed::Fixed ( float const &nb )
{
	// std::cout << "Float constructor called\n";
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
	// std::cout << "Copy constructor called\n";
	*this = nb;
}

std::ostream& operator<<(std::ostream &out, const Fixed &cp)
{
	out << cp.toFloat();
	return (out);
}

Fixed& Fixed::operator=(const Fixed &cp)
{
	// std::cout << "Copy assignment operator called\n";
	_raw = cp._raw;
    return (*this);
}

bool	Fixed::operator>( const Fixed &a )
{
	return (this->_raw > a._raw);
}

bool	Fixed::operator>=( const Fixed &a )
{
	return (this->_raw >= a._raw);
}

bool	Fixed::operator<( const Fixed &a )
{
	return (this->_raw < a._raw);
}

bool	Fixed::operator<=( const Fixed &a )
{
	return (this->_raw <= a._raw);
}

bool	Fixed::operator==( const Fixed &a )
{
	return (this->_raw == a._raw);
}

bool	Fixed::operator!=( const Fixed &a )
{
	return (this->_raw != a._raw);
}

Fixed	Fixed::operator+( const Fixed &a )
{
	return Fixed(this->toFloat() + a.toFloat());
}

Fixed	Fixed::operator-( const Fixed &a )
{
	return Fixed(this->toFloat() - a.toFloat());
}

Fixed	Fixed::operator*( const Fixed &a )
{
	return Fixed(this->toFloat() * a.toFloat());
}

Fixed	Fixed::operator/( const Fixed &a )
{
	return Fixed(this->toFloat() / a.toFloat());
}

Fixed	&Fixed::operator++( void )
{
	// pre-increment
	this->_raw++;
	return (*this);
}

Fixed	&Fixed::operator++( int )
{
	// post-increment
	++this->_raw;
	return (*this);
}

Fixed	&Fixed::operator--( void )
{
	this->_raw--;
	return (*this);
}

Fixed	&Fixed::operator--( int )
{
	--this->_raw;
	return (*this);
}


Fixed	Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a._raw > b._raw)
		return (a);
	return (b);
}

Fixed	Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a._raw < b._raw)
		return (a);
	return (b);
}

Fixed	Fixed::min(Fixed &a, Fixed &b)
{
	if (a._raw < b._raw)
		return (a);
	return (b);
}

Fixed	Fixed::max(Fixed &a, Fixed &b)
{
	if (a._raw > b._raw)
		return (a);
	return (b);
}