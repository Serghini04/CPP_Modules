/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 20:44:33 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/01 20:44:40 by meserghi         ###   ########.fr       */
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

ClapTrap::ClapTrap (ClapTrap &clone)
{
	_Name = clone._Name;
	_HitPoints = clone._HitPoints;
	_EnergyPoints = clone._EnergyPoints;
	_AttackDamage = clone._AttackDamage;
}

ClapTrap &ClapTrap::operator=(ClapTrap &clone)
{
	_Name = clone._Name;
	_HitPoints = clone._HitPoints;
	_EnergyPoints = clone._EnergyPoints;
	_AttackDamage = clone._AttackDamage;
	return (*this);
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
