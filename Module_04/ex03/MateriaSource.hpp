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
		MateriaSource(const MateriaSource &clone);
		MateriaSource &operator=(const MateriaSource &clone);
		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const & type);
};

#endif