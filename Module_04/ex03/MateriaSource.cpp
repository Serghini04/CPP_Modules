#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	_index = 0;
}

MateriaSource::MateriaSource(const MateriaSource &clone)
{
	_index = clone._index;
	for (int i = 0; i <_index; i++)
		_save[i] = clone._save[i]->clone();
}

MateriaSource &MateriaSource::operator=(const MateriaSource &clone)
{
	if (this != &clone)
	{
		for (int i = 0; i < _index; i++)
			delete _save[i];
		_index = clone._index;
		for (int i = 0; i <_index; i++)
			_save[i] = clone._save[i]->clone();
	}
	return (*this);
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
	for (int i = 0; i < _index; i++)
		delete _save[i];
}