#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Constructor Cat.\n";
}

void	Cat::makeSound() const
{
	std::cout << type << " Meow.\n";
}

Cat::Cat(Cat &clone) : Animal(clone.type)
{

}

Cat &Cat::operator=(Cat &clone)
{
	type = clone.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Destructor Cat.\n";
}