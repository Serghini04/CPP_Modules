/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 21:03:06 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/01 21:03:07 by meserghi         ###   ########.fr       */
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
		WrongAnimal(WrongAnimal &clone);
		void	makeSound() const;
		WrongAnimal(std::string Type);
		WrongAnimal &operator=(WrongAnimal &clone);
		~WrongAnimal();
};

#endif