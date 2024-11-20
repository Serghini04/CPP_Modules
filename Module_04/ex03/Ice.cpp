#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{

}

Ice::Ice(const Ice &clone) : AMateria(clone._type)
{

}

Ice	&Ice::operator=(const Ice &clone)
{
	_type = clone._type;
	return (*this);
}

AMateria *Ice::clone() const
{
	return (new Ice());
}


void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

Ice::~Ice()
{

}
