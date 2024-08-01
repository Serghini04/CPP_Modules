/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 20:47:37 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/01 20:59:40 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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
}

FragTrap &FragTrap::operator=(FragTrap &clone)
{
	_Name = clone._Name;
	_HitPoints = clone._HitPoints;
	_EnergyPoints = clone._EnergyPoints;
	_AttackDamage = clone._AttackDamage;
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
