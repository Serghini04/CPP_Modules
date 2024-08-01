/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 20:45:42 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/01 20:45:44 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	A("A");
	ClapTrap	B("B");

	A.attack("B");
	B.takeDamage(10);
	B.beRepaired(10);
	B.attack("A");
	A.takeDamage(10);
	A.beRepaired(10);
	return (0);
}