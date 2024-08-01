/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 21:01:14 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/01 21:01:15 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Constructor Dog.\n";
}

void	Dog::makeSound() const
{
	std::cout << type << " bark.\n";
}

Dog::Dog(Dog &clone) : Animal(clone.type)
{

}

Dog &Dog::operator=(Dog &clone)
{
	type = clone.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Destructor Dog.\n";
}