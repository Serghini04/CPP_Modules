/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 21:00:53 by meserghi          #+#    #+#             */
/*   Updated: 2024/11/20 14:54:48 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public :
		ScavTrap ( std::string Name );
		void	guardGate();
		ScavTrap (void);
		ScavTrap (ScavTrap const &clone);
		ScavTrap &operator=(ScavTrap const &clone);
		void	attack(const std::string& target);
		~ScavTrap ( void );
};

#endif