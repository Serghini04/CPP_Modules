#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{

}

Cure::Cure(const Cure &clone) : AMateria(clone._type)
{

}

Cure &Cure::operator=(const Cure &clone)
{
	_type = clone._type;
	return (*this);
}

AMateria *Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

Cure::~Cure()
{

}
