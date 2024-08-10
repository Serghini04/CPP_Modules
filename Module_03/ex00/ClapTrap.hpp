/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 20:44:45 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/10 12:57:09 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
	private :
		std::string	_Name;
		int			_HitPoints;
		int			_EnergyPoints;
		int			_AttackDamage;
	public :
		ClapTrap (std::string Name);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		ClapTrap (void);
		ClapTrap (ClapTrap const &clone);
		ClapTrap &operator=(ClapTrap const &clone);
		~ClapTrap (void);

};

#endif