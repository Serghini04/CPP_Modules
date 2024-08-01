/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 21:03:01 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/01 21:03:02 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(std::string Type)
{
	type = Type;
	std::cout << "Constructor WrongAnimal.\n";
}

WrongAnimal::WrongAnimal()
{
	type = "Unknown";
	std::cout << "Constructor WrongAnimal.\n";
}


WrongAnimal::WrongAnimal(WrongAnimal &clone)
{
	type = clone.type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << type << " sound.\n";
}

std::string	WrongAnimal::getType() const
{
	return (type);
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal &clone)
{
	type = clone.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor WrongAnimal.\n";
}