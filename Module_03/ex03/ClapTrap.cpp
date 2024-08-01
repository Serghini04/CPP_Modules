/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 21:00:00 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/01 21:00:01 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap (std::string Name)
{
	_Name = Name;
	_HitPoints = 10;
	_EnergyPoints = 10;
	_AttackDamage = 0;
	std::cout << "Create : " << _Name << " ClapTrap.\n";
}

ClapTrap::ClapTrap ()
{
	_Name = "Unknown";
	_HitPoints = 10;
	_EnergyPoints = 10;
	_AttackDamage = 0;
	std::cout << "Default Constructor : " << _Name <<" ClapTrap.\n";
}

ClapTrap::ClapTrap (ClapTrap &clone)
{
	_Name = clone._Name;
	_HitPoints = clone._HitPoints;
	_EnergyPoints = clone._EnergyPoints;
	_AttackDamage = clone._AttackDamage;
	std::cout << "Copy Assignment : " << _Name << " ClapTrap.\n";
}

ClapTrap &ClapTrap::operator=(ClapTrap &clone)
{
	_Name = clone._Name;
	_HitPoints = clone._HitPoints;
	_EnergyPoints = clone._EnergyPoints;
	_AttackDamage = clone._AttackDamage;
	std::cout << "Copy : " << _Name << " ClapTrap.\n";
	return (*this);
}

ClapTrap::~ClapTrap (void)
{
	std::cout << "Destroy : " << _Name << " ClapTrap.\n";
}

void ClapTrap::attack(const std::string& target)
{
	if (_HitPoints <= 0) {
		std::cout << "ClapTrap " << this->_Name << " is dead\n";
		return ;
	}
	if (_EnergyPoints <= 0) {
		std::cout << "ClapTrap " << this->_Name << " is out of energy\n";
		return ;
	}
	std::cout << "ClapTrap " << target << " attacks, causing " << _AttackDamage << " points of damage!\n";
	_EnergyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_HitPoints <= 0) {
		std::cout << "ClapTrap " << this->_Name << " is dead\n";
		return ;
	}
	_HitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	_HitPoints += amount;
	_EnergyPoints--;
}
