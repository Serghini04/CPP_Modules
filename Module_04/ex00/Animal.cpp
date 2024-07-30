#include "Animal.hpp"


Animal::Animal(std::string Type)
{
	type = Type;
	std::cout << "Constructor Animal.\n";
}

Animal::Animal()
{
	type = "Unknown";
	std::cout << "Constructor Animal.\n";
}


Animal::Animal(Animal &clone)
{
	type = clone.type;
}

void	Animal::makeSound() const
{
	std::cout << type << " sound.\n";
}

std::string	Animal::getType() const
{
	return (type);
}

Animal &Animal::operator=(Animal &clone)
{
	type = clone.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Destructor Animal.\n";
}