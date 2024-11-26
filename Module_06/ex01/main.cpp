/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 10:28:32 by meserghi          #+#    #+#             */
/*   Updated: 2024/11/25 18:07:37 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Serialize.hpp"

int main()
{
	Data	d;
	uintptr_t	nb = Serialize::serialize(&d);

	std::cout << "Before Serialied : " << nb << "\n";
	std::cout << "Serialied : " << nb << "\n";
	std::cout << "DeSerialied : " << Serialize::deserialize(nb) << "\n";
	return 0;
}
