/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 20:59:07 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/15 16:32:45 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Constructor Cat.\n";
}

void	Cat::makeSound() const
{
	std::cout << type << " Meow.\n";
}

Cat::Cat(Cat const &clone) : Animal(clone.type)
{

}

Cat &Cat::operator=(Cat const &clone)
{
	type = clone.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Destructor Cat.\n";
}
