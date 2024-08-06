#ifndef ICE_HPP
# define ICE_HPP
# include <iostream>
# include "AMateria.hpp"
# include "Character.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif