#ifndef CURE_HPP
# define CURE_HPP
# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(const Cure &clone);
		Cure &operator=(const Cure &clone);
		~Cure();
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
