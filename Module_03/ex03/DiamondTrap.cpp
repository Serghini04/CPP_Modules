/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 21:00:16 by meserghi          #+#    #+#             */
/*   Updated: 2024/10/02 20:36:36 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string Name) : ClapTrap(Name + "_clap_Name"), ScavTrap(Name), FragTrap(Name)
{
	_Name = Name;
	FragTrap::_HitPoints = 100;
	ScavTrap::_EnergyPoints = 50;
	FragTrap::_AttackDamage = 20;
	std::cout << "Create : " << _Name << " DiamondTrap.\n";
}

DiamondTrap::DiamondTrap() : ClapTrap("Unknown_clap_name"), ScavTrap("Unknown"), FragTrap("Unknown")
{
	_Name = "Unknown";
	_HitPoints = FragTrap::_HitPoints;
	_EnergyPoints = ScavTrap::_EnergyPoints;
	_AttackDamage = FragTrap::_AttackDamage;
	std::cout << "Default Constructor : " << _Name <<" DiamondTrap.\n";
}

DiamondTrap::DiamondTrap (DiamondTrap const &clone) : ClapTrap(clone._Name), ScavTrap(clone._Name), FragTrap(clone._Name)
{
	_Name = clone._Name;
	_HitPoints = clone._HitPoints;
	_EnergyPoints = clone._EnergyPoints;
	_AttackDamage = clone._AttackDamage;
	std::cout << "Copy Constructor : "<< _Name << " DiamondTrap.\n";
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &clone)
{
	ClapTrap::operator=(clone);
	ClapTrap::_Name = clone._Name;

	_Name = clone._Name;
	_HitPoints = clone._HitPoints;
	_EnergyPoints = clone._EnergyPoints;
	_AttackDamage = clone._AttackDamage;
	std::cout << "Copy Assignment : "<< _Name << " DiamondTrap.\n";
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am " << _Name << " and my ClapTrap name is " << ClapTrap::_Name << ".\n";
}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "Destroy : "<< _Name << " DiamondTrap.\n";
}
