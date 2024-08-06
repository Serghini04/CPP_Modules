#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <iostream>

class Character : public ICharacter
{
	private:
		std::string _name;
		int			_index;
		int			_index_tmp;
		AMateria	*_inventory[4];
		AMateria	**_tmp;
	public:
		~Character();
		Character(std::string	name);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
