/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 21:00:26 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/01 21:00:27 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap (std::string Name) : ClapTrap(Name)
{
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
	std::cout << "Create : " << _Name << " FragTrap.\n";
}

FragTrap::FragTrap (void) : ClapTrap("Unknown")
{
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
	std::cout << "Default Constructor : "<< _Name << " FragTrap.\n";
}

FragTrap::FragTrap (FragTrap &clone) : ClapTrap(clone._Name)
{
	_HitPoints = clone._HitPoints;
	_EnergyPoints = clone._EnergyPoints;
	_AttackDamage = clone._AttackDamage;
	std::cout << "Copy Assignment : " << _Name << " FragTrap.";
}

FragTrap &FragTrap::operator=(FragTrap &clone)
{
	_Name = clone._Name;
	_HitPoints = clone._HitPoints;
	_EnergyPoints = clone._EnergyPoints;
	_AttackDamage = clone._AttackDamage;
	std::cout << "Copy : " << _Name << " FragTrap.\n";
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "positive high fives reques.\n";
}

FragTrap::~FragTrap (void)
{
	std::cout << "Destroy : " << _Name << " FragTrap.\n";
}
