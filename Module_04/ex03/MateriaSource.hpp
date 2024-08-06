#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_save[4];
		int			_index;
	public:
		~MateriaSource();
		MateriaSource();
		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const & type);
};

#endif