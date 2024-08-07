/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:31:04 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/06 09:54:47 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string	Weapon::getType( void )
{
	return (type);
}

void	Weapon::setType(std::string Type)
{
	type = Type;
}

Weapon::Weapon( std::string name )
{
	setType(name);
}
