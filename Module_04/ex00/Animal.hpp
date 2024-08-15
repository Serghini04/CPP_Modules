/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 20:58:58 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/15 16:37:15 by meserghi         ###   ########.fr       */
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
		Animal(std::string Type);
		std::string getType() const;
		Animal(const Animal &clone);
		virtual	void	makeSound() const;
		Animal &operator=(const Animal &clone);
		virtual ~Animal();
};

#endif