/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 21:02:41 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/15 19:52:12 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private :
		Brain	*_brain;
	public:
		Dog();
		void SetBrainIdea(int index, std::string idea);
		std::string GetBrainIdea(int index) const;
		Dog(Dog const &clone);
		void	makeSound() const;
		Dog &operator=(Dog const &clone);
		~Dog();
};

#endif