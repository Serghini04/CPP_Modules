#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal
{
	private :
	public:
		Dog();
		Dog(Dog &clone);
		void	makeSound() const;
		Dog &operator=(Dog &clone);
		~Dog();
};

#endif