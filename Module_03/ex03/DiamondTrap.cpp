#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string Name) : ClapTrap(Name), FragTrap(Name), ScavTrap(Name)
{
	_name = Name;
	ClapTrap::_Name = Name + "_clap_name";
	std::cout << "fff";
}

DiamondTrap::DiamondTrap( void )
{

}

// DiamondTrap::DiamondTrap (DiamondTrap &clone) : ClapTrap(clone._name), FragTrap(clone._name), ScavTrap(clone._name)
// {
// 	_EnergyPoints = clone._EnergyPoints;
// }

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "Destroy DiamondTrap.\n";
}