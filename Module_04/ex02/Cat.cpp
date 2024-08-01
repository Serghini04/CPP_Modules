#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), _brain(new Brain())
{
	std::cout << "Constructor Cat.\n";
}

void	Cat::makeSound() const
{
	std::cout << type << " Meow.\n";
}

Cat::Cat(Cat &clone) : Animal(clone.type), _brain(new Brain(*clone._brain))
{

}

Cat &Cat::operator=(Cat &clone)
{
	type = clone.type;
	delete clone._brain;
	_brain = new Brain(*clone._brain);
	return (*this);
}

void	Cat::SetBrainIdea(int index, std::string idea)
{
	if (index >= 0 && index < 100)
		_brain->SetIdea(index, idea);
}

std::string	Cat::GetBrainIdea(int index)
{
	if (index >= 0 && index < 100)
		return (_brain->GetIdea(index));
	return ("");
}

Cat::~Cat()
{
	std::cout << "Destructor Cat.\n";
	delete _brain;
}
