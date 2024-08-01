#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private :
		Brain *_brain;
	public:
		Dog();
		void SetBrainIdea(int index, std::string idea);
		std::string GetBrainIdea(int index);
		Dog(Dog &clone);
		void	makeSound() const;
		Dog &operator=(Dog &clone);
		~Dog();
};

#endif