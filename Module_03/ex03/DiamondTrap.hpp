#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include <iostream>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string	_name;
	public :
		DiamondTrap ( std::string Name );
		DiamondTrap (void);
		// DiamondTrap (DiamondTrap &clone);
		DiamondTrap &operator=(DiamondTrap &clone);
		~DiamondTrap ( void );
};

#endif