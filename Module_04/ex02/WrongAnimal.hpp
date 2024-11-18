/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 21:03:06 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/15 17:19:07 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;
	public:
		WrongAnimal();
		std::string getType() const;
		WrongAnimal(WrongAnimal const &clone);
		void	makeSound() const;
		WrongAnimal(std::string Type);
		WrongAnimal &operator=(WrongAnimal const &clone);
		~WrongAnimal();
};

#endif