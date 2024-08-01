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