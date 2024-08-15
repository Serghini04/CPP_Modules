/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 21:02:22 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/15 19:53:28 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), _brain(new Brain())
{
	std::cout << "Constructor Cat.\n";
}

void	Cat::makeSound() const
{
	std::cout << type << " Meow.\n";
}

Cat::Cat(Cat const &clone) : Animal(clone.type), _brain(new Brain(*clone._brain))
{

}

Cat &Cat::operator=(Cat const &clone)
{
	if (&clone != this)
	{
		type = clone.type;
		delete _brain;
		_brain = new Brain(*clone._brain);
	}
	return (*this);
}

void	Cat::SetBrainIdea(int index, std::string idea)
{
	if (index >= 0 && index < 100)
		_brain->SetIdea(index, idea);
}

std::string	Cat::GetBrainIdea(int index) const
{
	if (index >= 0 && index < 100)
		return (_brain->GetIdea(index));
	return ("");
}

Cat::~Cat()
{
	std::cout << "Destructor Cat.\n";
	delete _brain;
}
