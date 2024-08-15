/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 20:59:16 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/15 16:31:49 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
# define Cat_HPP
# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const &clone);
		void	makeSound() const;
		Cat &operator=(Cat const &clone);
		~Cat();
};

#endif
