/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:33:19 by meserghi          #+#    #+#             */
/*   Updated: 2024/11/26 13:09:33 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Serialize.hpp"

Serialize::Serialize()
{

}
Serialize::Serialize(const Serialize &clone)
{
	(void)clone;
}

Serialize &Serialize::operator=(const Serialize &clone)
{
	(void)clone;
	return *this;
}


uintptr_t Serialize::serialize(Data* ptr)
{
	uintptr_t	res;

	res = reinterpret_cast<uintptr_t>(ptr);
	return res;
};

Data*	Serialize::deserialize(uintptr_t raw)
{
	Data*	res;

	res = reinterpret_cast<Data*>(raw);
	return res;
};

Serialize::~Serialize()
{

}