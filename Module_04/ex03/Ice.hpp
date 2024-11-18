#ifndef ICE_HPP
# define ICE_HPP
# include <iostream>
# include "AMateria.hpp"
# include "Character.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice &clone);
		Ice &operator=(const Ice &clone);
		~Ice();
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif