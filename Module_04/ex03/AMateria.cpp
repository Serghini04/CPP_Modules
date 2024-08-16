#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string const & type)
{
	_type = type;
}

AMateria::AMateria() : _type("default")
{

}

AMateria &AMateria::operator=(const AMateria &clone)
{
	_type = clone._type;
	return (*this);
}

AMateria::AMateria(const AMateria &clone) : _type(clone._type)
{

}

std::string const &AMateria::getType() const
{
	return (_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* Default " << target.getName() << " *\n";
}

AMateria::~AMateria()
{

}