/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 17:53:47 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/09 12:07:59 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	_max = 0;
}

Span::Span(unsigned int N)
{
	_max = N;
}

void	Span::addNumber(int value)
{
	if (_v.size() >= _max)
		throw std::runtime_error("Out Of Size\n");
	_v.push_back(value);
}

Span::Span(const Span &clone)
{
	_max = clone._max;
	_v = clone._v;
}

Span &Span::operator=(const Span &clone)
{
	if (&clone != this)
	{
		_max = clone._max;
		_v = clone._v;
	}
	return *this;
}

long	Span::shortestSpan()
{
	long	min;
	long	sp;

	if (_v.size() <= 1)
		throw std::runtime_error("Not enough elements to calculate span");
	min = LONG_MAX;
	std::sort(_v.begin(), _v.end());
	for (std::vector<int>::iterator it = _v.begin(); it + 1 != _v.end(); it++)
	{
		sp = abs(*(it + 1) - static_cast<long long>(*it));
		if (min > sp)
			min = sp;
	}
	return min;
}

long	Span::longestSpan() {
    if (_v.size() < 2)
		throw std::runtime_error("Not enough elements to calculate span");
	std::sort(_v.begin(), _v.end());
    return abs(*_v.begin() - static_cast<long long>(*(_v.end() - 1)));
}

Span::~Span()
{

}