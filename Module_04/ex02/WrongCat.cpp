/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 21:04:37 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/01 21:04:38 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "Constructor WrongCat.\n";
}

void	WrongCat::makeSound() const
{
	std::cout << type << " Meow.\n";
}

WrongCat::WrongCat(WrongCat &clone) : WrongAnimal(clone.type)
{

}

WrongCat &WrongCat::operator=(WrongCat &clone)
{
	type = clone.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor WrongCat.\n";
}