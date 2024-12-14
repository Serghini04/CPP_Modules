/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 13:30:44 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/14 20:21:51 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RPN.hpp"

RPN::RPN()
{

}

void RPN::applyCalcul(char c)
{
	double nb1;
	double nb2;

	if (_s.size() < 2)
		throw std::runtime_error("Error: Stack is empty.");
	nb2 = _s.top();
	_s.pop();
	nb1 = _s.top();
	_s.pop();
	std::cout << nb1 << " | " << nb2 << "\n";
	if (c == '+')
		_s.push(nb1 + nb2);
	else if (c == '-')
		_s.push(nb1 - nb2);
	else if (c == '*')
		_s.push(nb1 * nb2);
	else if (c == '/')
	{
		if (nb2 == 0)
			throw std::runtime_error("Error: Division by zero is not allowed.");
		_s.push(nb1 / nb2);
	}
}

RPN::RPN(const RPN &clone)
{
	_s = clone._s;
}

RPN &RPN::operator=(const RPN &clone)
{
	if (this != &clone)
		_s = clone._s;
	return *this;
}

void	RPN::useRPN(std::string line)
{
	int i;

	if (line.empty())
		throw std::runtime_error("Error: empty line.");
	for (i = 0; line[i + 1]; i++)
	{
		if (line[i] == ' ')
			continue;
		else if (std::isdigit(line[i]) && line[i + 1] == ' ')
			_s.push(line[i] - 48);
		else if (line[i] == '-' || line[i] == '+' || line[i] == '/' | line[i] == '*')
			applyCalcul(line[i]);
		else
			throw  std::runtime_error("Error");
	}
	if (line[i] == '-' || line[i] == '+' || line[i] == '/' | line[i] == '*')
		applyCalcul(line[i]);
	if (_s.size() != 1)
		throw std::runtime_error("Error");
	std::cout << _s.top() << "\n";
}

RPN::~RPN()
{

}