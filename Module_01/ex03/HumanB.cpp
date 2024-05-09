/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 12:37:30 by meserghi          #+#    #+#             */
/*   Updated: 2024/05/09 16:15:48 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string Name)
{
	name = Name;
}

void	HumanB::attack( void )
{
	std::cout << name << " attacks with their " << clsWeapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &clsweapon)
{
	clsWeapon = &clsweapon;
}