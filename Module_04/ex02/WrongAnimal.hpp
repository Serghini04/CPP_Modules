#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;
	public:
		WrongAnimal();
		std::string getType() const;
		WrongAnimal(WrongAnimal &clone);
		void	makeSound() const;
		WrongAnimal(std::string Type);
		WrongAnimal &operator=(WrongAnimal &clone);
		~WrongAnimal();
};

#endif