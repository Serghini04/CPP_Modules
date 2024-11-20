/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 12:35:29 by meserghi          #+#    #+#             */
/*   Updated: 2024/05/09 16:08:03 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class	HumanB
{
	private:
		std::string	name;
		Weapon		*clsWeapon;
	public:
		HumanB( std::string Name );
		void	attack( void );
		void	setWeapon( Weapon &clsweapon );
};
