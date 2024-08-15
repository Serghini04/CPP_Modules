/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 21:02:01 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/15 17:16:06 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		std::string getType() const;
		Animal(const Animal &clone);
		virtual	void	makeSound() const;
		Animal(std::string Type);
		Animal &operator=(const Animal &clone);
		virtual ~Animal();
};

#endif