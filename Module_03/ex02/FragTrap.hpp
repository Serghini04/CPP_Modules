#ifndef FRAGTRAG_HPP
# define FRAGTRAG_HPP
# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
	public :
		FragTrap(std::string Name);
		~FragTrap(void);
		void	highFivesGuys(void);
};

#endif