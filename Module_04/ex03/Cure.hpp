#ifndef CURE_HPP
# define CURE_HPP
# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
