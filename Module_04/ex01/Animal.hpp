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