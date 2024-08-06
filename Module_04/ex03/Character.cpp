#include "Character.hpp"

Character::Character(std::string name)
{
	_index = 0;
	_index_tmp = 0;
	_name = name;
}

std::string const &Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	if (_index < 4)
	{
		_inventory[_index] = m;
		_index++;
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < _index - 1)
	{
		_tmp[_index_tmp] = _inventory[idx];
		while (idx < _index)
		{
			_inventory[idx] = _inventory[idx - 1];
			idx++;	
		}
		_index--;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < _index && _inventory[idx])
		_inventory[idx]->use(target);
}

Character::~Character()
{
	for (int i = 0; i < _index; i++)
		delete  _inventory[i];
	for (int i = 0; i < _index_tmp; i++)
		delete _tmp[i];
}