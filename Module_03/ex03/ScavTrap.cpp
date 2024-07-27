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

ScavTrap::ScavTrap ()
{
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << "Create Unknown ScavTrap.\n";
}

ScavTrap::ScavTrap (ScavTrap &clone) : ClapTrap(clone._Name)
{
	_HitPoints = clone._HitPoints;
	_EnergyPoints = clone._EnergyPoints;
	_AttackDamage = clone._AttackDamage;
	std::cout << "Create " << _Name << " ScavTrap.\n";
}

ScavTrap &ScavTrap::operator=(ScavTrap &clone)
{
	_Name = clone._Name;
	_HitPoints = clone._HitPoints;
	_EnergyPoints = clone._EnergyPoints;
	_AttackDamage = clone._AttackDamage;
	return (*this);
}

ScavTrap::~ScavTrap (void)
{
	std::cout << "Destroy " << _Name << " ScavTrap.\n";
}