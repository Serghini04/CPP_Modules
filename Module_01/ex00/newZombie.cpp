/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:00:12 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/06 09:17:17 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie( std::string name )
{
	Zombie	*clsZombie;

	clsZombie = new Zombie;
	if (!clsZombie)
		return (NULL);
	clsZombie->SetName(name);
	clsZombie->announce();
	return (clsZombie);
}
