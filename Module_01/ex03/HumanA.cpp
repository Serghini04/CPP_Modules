/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:20:19 by meserghi          #+#    #+#             */
/*   Updated: 2024/07/21 15:50:09 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack( void )
{
	std::cout << name << " attacks with their " << clsWeapon.getType() << std::endl;
}

HumanA::HumanA(std::string Name, Weapon &_clsWeapon) : clsWeapon(_clsWeapon)
{
	name = Name;
}
