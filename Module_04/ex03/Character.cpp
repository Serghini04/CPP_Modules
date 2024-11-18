#include "Character.hpp"

Character::Character(std::string name)
{
	_index = 0;
	_index_tmp = 0;
	_name = name;
}

Character::Character()
{
	_index = 0;
	_index_tmp = 0;
	_name = "Unknown";
}

Character::Character(const Character &clone)
{
	_index = clone._index;
	_index_tmp = clone._index_tmp;
	_name = clone._name;
	for (int i = 0; i < _index; i++)
	{
		_inventory[i] = clone._inventory[i]->clone();
	}
	for (int i = 0; i < _index_tmp; i++)
	{
		_tmp[i] = clone._tmp[i]->clone();
	}
}

Character &Character::operator=(const Character &clone)
{
	if (this != &clone)
	{
		for (int i = 0; i < _index; i++)
			delete _inventory[i];
		for (int i = 0; i < _index_tmp; i++)
			delete _tmp[i];
		_index = clone._index;
		_index_tmp = clone._index_tmp;
		_name = clone._name;
		for (int i = 0; i < _index; i++)
			_inventory[i] = clone._inventory[i]->clone();
		for (int i = 0; i < _index_tmp; i++)
			_tmp[i] = clone._tmp[i]->clone();
	}
	return ( *this );
}

std::string const &Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	if (_index < 4)
	{
		for (int i = 0; i < _index; i++) {
			if (m == _inventory[i])
				return ;
		}
		_inventory[_index] = m;
		_index++;
	}
	if (_index_tmp >= 2147483647)
	{
		for (int i = 0; i < 2147483647; i++)
			delete _tmp[i];
		_index_tmp = 0;
	}
}

void	Character::unequip(int idx)
{
    if (idx >= 0 && idx < _index)
    {
        _tmp[_index_tmp] = _inventory[idx];
        _index_tmp++;
        while (idx < _index - 1)
        {
            _inventory[idx] = _inventory[idx + 1];
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
