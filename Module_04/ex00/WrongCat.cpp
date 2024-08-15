/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 21:01:44 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/15 16:41:24 by meserghi         ###   ########.fr       */
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

WrongCat::WrongCat(WrongCat const &clone) : WrongAnimal(clone.type)
{

}

WrongCat &WrongCat::operator=(WrongCat const &clone)
{
	type = clone.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor WrongCat.\n";
}