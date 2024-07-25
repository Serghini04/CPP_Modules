#include "ClapTrap.hpp"

int main()
{
	ClapTrap	A("A");
	ClapTrap	B("B");

	A.attack("B");
	B.takeDamage(10);
	B.beRepaired(10);
	B.attack("A");
	A.takeDamage(10);
	A.beRepaired(10);
	return (0);
}