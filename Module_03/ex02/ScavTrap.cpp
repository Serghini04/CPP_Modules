/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 20:48:07 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/01 20:48:09 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap (std::string Name) : ClapTrap(Name)
{
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << "Create : " << _Name << " ScavTrap.\n";
}

void ScavTrap::attack(const std::string& target)
{
	if (_HitPoints <= 0) {
		std::cout << "ScavTrap " << this->_Name << " is dead\n";
		return ;
	}
	if (_EnergyPoints <= 0) {
		std::cout << "ScavTrap " << this->_Name << " is out of energy\n";
		return ;
	}
	std::cout << "ScavTrap " << target << " attacks, causing " << _AttackDamage << " point.\n";
	_EnergyPoints--;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode.\n";
}

ScavTrap::ScavTrap ()
{
	_Name = "Unknown";
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << "Default Constructor : " << _Name << " ScavTrap.\n";
}

ScavTrap::ScavTrap (ScavTrap &clone) : ClapTrap(clone._Name)
{
	_HitPoints = clone._HitPoints;
	_EnergyPoints = clone._EnergyPoints;
	_AttackDamage = clone._AttackDamage;
	std::cout << "Copy Assignment : " << _Name << " ScavTrap.\n";
}

ScavTrap &ScavTrap::operator=(ScavTrap &clone)
{
	_Name = clone._Name;
	_HitPoints = clone._HitPoints;
	_EnergyPoints = clone._EnergyPoints;
	_AttackDamage = clone._AttackDamage;
	std::cout << "Copy : " << _Name << "ScavTrap.\n";
	return (*this);
}

ScavTrap::~ScavTrap (void)
{
	std::cout << "Destroy : " << _Name << " ScavTrap.\n";
}