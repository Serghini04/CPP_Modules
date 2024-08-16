#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{

}

Ice::Ice(const Ice &clone) : AMateria(clone._type)
{

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
