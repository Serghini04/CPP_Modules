#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :
		ScavTrap ( std::string Name );
		void	guardGate();
		ScavTrap (void);
		ScavTrap (ScavTrap &clone);
		ScavTrap &operator=(ScavTrap &clone);
		void	attack(const std::string& target);
		~ScavTrap ( void );
};

#endif