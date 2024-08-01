#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Constructor Brain.\n";
}

Brain::Brain(const Brain &clone)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = clone.ideas[i];
}

void	Brain::SetIdea(int index, std::string idea)
{
	if (index >= 0 &&  index < 100)
		ideas[index] = idea;
}

std::string	Brain::GetIdea(int index)
{
	if (index >= 0 &&  index < 100)
		return (ideas[index]);
	return ("");
}


Brain &Brain::operator=(const Brain &clone)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = clone.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Destructor Brain.\n";
}