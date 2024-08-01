#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(WrongCat &clone);
		void	makeSound() const;
		WrongCat &operator=(WrongCat &clone);
		~WrongCat();
};

#endif