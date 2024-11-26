/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:34:02 by meserghi          #+#    #+#             */
/*   Updated: 2024/11/26 13:08:09 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include <iostream>

struct	Data
{
	int			nb;
	std::string	name;
};

class	Serialize
{
	private :
		Serialize();
		Serialize(const Serialize &clone);
		Serialize &operator=(const Serialize &clone);
		~Serialize();
	public :
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};
