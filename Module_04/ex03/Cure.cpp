#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{

}

AMateria *Cure::clone() const
{
	return (new Cure());
}


void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
