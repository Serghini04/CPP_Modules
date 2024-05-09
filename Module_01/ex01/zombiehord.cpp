/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombiehord.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 13:35:31 by meserghi          #+#    #+#             */
/*   Updated: 2024/05/08 14:08:08 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name )
{
	Zombie	*clsZombie;
	int		i;

	i = 0;
	clsZombie = new Zombie[N];
	while (i < N)
	{
		clsZombie[i].SetName(name);
		i++;
	}
	return (clsZombie);
}
