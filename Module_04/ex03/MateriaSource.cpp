#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	_index = 0;
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (_index < 4)
	{
		_save[_index] = m;
		_index++; 
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < _index; i++)
		if (_save[i]->getType() == type)
			return (_save[i]->clone());
	return (0);
}

MateriaSource::~MateriaSource()
{

}