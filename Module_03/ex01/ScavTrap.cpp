/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 20:47:00 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/01 20:47:02 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap (std::string Name) : ClapTrap(Name)
{
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << "Create " << _Name << " ScavTrap.\n";
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode.\n";
}

ScavTrap::~ScavTrap (void)
{
	std::cout << "Destroy " << _Name << " ScavTrap.\n";
}