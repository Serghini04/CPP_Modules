/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 20:59:16 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/01 20:59:18 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
# define Cat_HPP
# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat &clone);
		void	makeSound() const;
		Cat &operator=(Cat &clone);
		~Cat();
};

#endif