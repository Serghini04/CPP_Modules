/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 13:32:02 by meserghi          #+#    #+#             */
/*   Updated: 2024/07/21 17:47:08 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	*clsZombie;
	int		i;
	int		n;

	i = 0;
	n = 1;
	clsZombie = zombieHorde(n, "Z1");
	while (i < n)
	{
		clsZombie[i].announce();
		i++;
	}
	delete []clsZombie;
	return (0);
}