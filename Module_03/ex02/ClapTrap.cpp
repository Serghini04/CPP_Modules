/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 20:47:19 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/01 20:47:23 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap (std::string Name)
{
	_Name = Name;
	_HitPoints = 10;
	_EnergyPoints = 10;
	_AttackDamage = 0;
	std::cout << "Create " << _Name << " ClapTrap.\n";
}

ClapTrap::~ClapTrap (void)
{
	std::cout << "Destroy " << _Name << " ClapTrap.\n";
}

void ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << target << " attacks, causing \n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_AttackDamage += amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	_HitPoints += amount;
	_EnergyPoints--;
}
