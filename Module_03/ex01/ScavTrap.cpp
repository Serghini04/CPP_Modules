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

}