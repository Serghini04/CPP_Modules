/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:39:03 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/06 09:57:16 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	name;
		Weapon		&clsWeapon;
	public:
		HumanA( std::string Name, Weapon &_clsWeapon );
		void	attack( void );
};
