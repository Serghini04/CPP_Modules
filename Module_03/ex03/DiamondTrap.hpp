/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 21:00:21 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/01 21:00:22 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include <iostream>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	_Name;
	public :
		using ScavTrap::attack;
		DiamondTrap ( std::string Name );
		DiamondTrap (void);
		DiamondTrap (DiamondTrap &clone);
		void whoAmI();
		void attack(const std::string &target);
		DiamondTrap &operator=(DiamondTrap &clone);
		~DiamondTrap ( void );
};

#endif