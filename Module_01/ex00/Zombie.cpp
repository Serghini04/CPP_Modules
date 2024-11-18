/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:45:03 by meserghi          #+#    #+#             */
/*   Updated: 2024/05/08 11:51:52 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce( void )
{
	std::cout << _Name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie ( void )
{
    std::cout << _Name << " has been destroyed." << std::endl;
}

void	Zombie::SetName(std::string Name)
{
	_Name = Name;
}
