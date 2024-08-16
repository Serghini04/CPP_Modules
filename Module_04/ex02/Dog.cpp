/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 21:02:34 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/15 19:52:49 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), _brain(new Brain())
{
	std::cout << "Constructor Dog.\n";
}

void	Dog::makeSound() const
{
	std::cout << type << " Weof.\n";
}

Dog::Dog(Dog const &clone) : Animal(clone.type), _brain(new Brain(*clone._brain))
{

}

Dog &Dog::operator=(Dog const &clone)
{
	if (this != &clone)
	{
		type = clone.type;
		delete _brain;
		_brain = new Brain(*clone._brain);
	}
	return (*this);
}

void	Dog::SetBrainIdea(int index, std::string idea)
{
	if (index >= 0 && index < 100)
		_brain->SetIdea(index, idea);
}

std::string	Dog::GetBrainIdea(int index) const
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
