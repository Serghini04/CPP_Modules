/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 20:48:15 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/01 20:48:17 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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