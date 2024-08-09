/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 12:03:35 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/09 16:13:31 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fraction = 8;

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
	_raw = nb << _fraction;
}

Fixed::Fixed ( float const &nb )
{
	// std::cout << "Float constructor called\n";
	_raw = roundf(nb * (1 << _fraction));
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

bool	Fixed::operator>( const Fixed &a ) const
{
	return (this->toFloat() > a.toFloat());
}

bool	Fixed::operator>=( const Fixed &a ) const
{
	return (this->toFloat() >= a.toFloat());
}

bool	Fixed::operator<( const Fixed &a ) const
{
	return (this->toFloat() < a.toFloat());
}

bool	Fixed::operator<=( const Fixed &a ) const
{
	return (this->toFloat() <= a.toFloat());
}

bool	Fixed::operator==( const Fixed &a ) const
{
	return (this->toFloat() == a.toFloat());
}

bool	Fixed::operator!=( const Fixed &a ) const
{
	return (this->toFloat() != a.toFloat());
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

Fixed	Fixed::operator++( void )
{
	// pre-increment
	++this->_raw;
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	// post-increment
	Fixed tmp(*this);

	this->_raw++;
	return (tmp);
}

Fixed	Fixed::operator--( void )
{
	--this->_raw;
	return (*this);
}

Fixed	Fixed::operator--( int )
{
	Fixed tmp(*this);

	this->_raw--;
	return (tmp);
}


Fixed	Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.toFloat() > b.toFloat())
		return (a);
	return (b);
}

Fixed	Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.toFloat() < b.toFloat())
		return (a);
	return (b);
}

Fixed	Fixed::min(Fixed &a, Fixed &b)
{
	if (a.toFloat() < b.toFloat())
		return (a);
	return (b);
}

Fixed	Fixed::max(Fixed &a, Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return (a);
	return (b);
}
