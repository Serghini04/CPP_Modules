#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"


int main()
{
	std::cout << "========Virtual Function=======\n";
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
	std::cout << "==============================\n";
	std::cout << "=====Non-Virtual Function=====\n";
	WrongAnimal	*A = new WrongCat();

	A->makeSound();
	delete A;
	std::cout << "==============================\n";
	return (0);
}