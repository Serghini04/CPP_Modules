/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 10:28:32 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/22 20:27:23 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Serialize.hpp"

int main()
{
	Data	d;
	d.name = "hello";
	Data	*e;

	uintptr_t	nb = Serialize::serialize(&d);

	// std::cout << "Before Serialied : " << nb << "\n";
	// std::cout << "Serialied : " << nb << "\n";
	// std::cout << "DeSerialied : " << Serialize::deserialize(nb) << "\n";
	e = Serialize::deserialize(nb);
	if (e == &d)
	{
		std::cout << "eqaul  : " << e->name<< std::endl;
	}
	return 0;
}
