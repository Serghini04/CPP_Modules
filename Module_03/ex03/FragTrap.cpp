#include "FragTrap.hpp"

FragTrap::FragTrap (std::string Name) : ClapTrap(Name)
{
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
	std::cout << "Create " << _Name << " FragTrap.\n";
}

FragTrap::FragTrap (void)
{
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
	std::cout << "Create Unknown FragTrap.\n";
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
	std::cout << "positive high fives reques\n.";
}

FragTrap::~FragTrap (void)
{
	std::cout << "Destroy " << _Name << " FragTrap.\n";
}
