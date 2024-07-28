#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string Name) : ClapTrap(Name + "_clap_Name"), ScavTrap(Name), FragTrap(Name)
{
	_Name = Name;
	_HitPoints = FragTrap::_HitPoints;
	_EnergyPoints = ScavTrap::_EnergyPoints;
	_AttackDamage = FragTrap::_AttackDamage;	
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

DiamondTrap::DiamondTrap (DiamondTrap &clone) : ClapTrap(clone._Name), ScavTrap(clone._Name), FragTrap(clone._Name)
{
	_Name = clone._Name;
	_HitPoints = clone._HitPoints;
	_EnergyPoints = clone._EnergyPoints;
	_AttackDamage = clone._AttackDamage;
	std::cout << "Copy Assignment : "<< _Name << " DiamondTrap.\n";
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap &clone)
{
	_Name = clone._Name;
	_HitPoints = clone._HitPoints;
	_EnergyPoints = clone._EnergyPoints;
	_AttackDamage = clone._AttackDamage;
	std::cout << "Copy : "<< _Name << " DiamondTrap.\n";
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