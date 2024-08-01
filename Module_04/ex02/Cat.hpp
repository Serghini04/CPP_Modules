#ifndef Cat_HPP
# define Cat_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*_brain;
	public:
		Cat();
		Cat(Cat &clone);
		void SetBrainIdea(int index, std::string idea);
		std::string GetBrainIdea(int index);
		void	makeSound() const;
		Cat &operator=(Cat &clone);
		~Cat();
};

#endif