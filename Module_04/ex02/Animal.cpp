/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 21:03:38 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/01 21:03:39 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(std::string Type)
{
	type = Type;
	std::cout <<  type <<" : Constructor Animal.\n";
}

Animal::Animal()
{
	type = "Unknown";
	std::cout << "Default Constructor Animal.\n";
}


Animal::Animal(const Animal &clone)
{
	type = clone.type;
}

std::string	Animal::getType() const
{
	return (type);
}

Animal &Animal::operator=(const Animal &clone)
{
	type = clone.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Destructor Animal.\n";
}