/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 21:02:34 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/01 21:02:35 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), _brain(new Brain())
{
	std::cout << "Constructor Dog.\n";
}

void	Dog::makeSound() const
{
	std::cout << type << " bark.\n";
}

Dog::Dog(Dog &clone) : Animal(clone.type), _brain(new Brain(*clone._brain))
{

}

Dog &Dog::operator=(Dog &clone)
{
	type = clone.type;
	delete clone._brain;
	_brain = new Brain(*clone._brain);
	return (*this);
}

void	Dog::SetBrainIdea(int index, std::string idea)
{
	if (index >= 0 && index < 100)
		_brain->SetIdea(index, idea);
}

std::string	Dog::GetBrainIdea(int index)
{
	if (index >= 0 && index < 100)
		return (_brain->GetIdea(index));
	return ("");
}

Dog::~Dog()
{
	std::cout << "Destructor Dog.\n";
	delete _brain;
}