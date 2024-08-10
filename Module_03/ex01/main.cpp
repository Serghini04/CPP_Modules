/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 20:46:43 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/10 14:52:15 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap	A("A");
	ScavTrap	B("B");

	A.guardGate();
	B.guardGate();
	A.attack("B");
	B.takeDamage(20);
	B.attack("A");
	A.takeDamage(20);
	return (0);
}
