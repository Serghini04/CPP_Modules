/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 21:02:47 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/17 15:14:32 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	int size = 4;
	const Animal *animals[size];

	for (int i = 0; i < size; ++i)
	{
		if (i < size / 2)
	    	animals[i] = new Dog();
		else
	    	animals[i] = new Cat();
	}
	for (int i = 0; i < size; ++i)
	    animals[i]->makeSound();
	for (int i = 0; i < size; ++i)
	    delete animals[i];

	std::cout << "=============================\n";
	std::cout << "    Example of Deep copy :\n";
	std::cout << "=============================\n";

	Dog originalDog;
	originalDog.SetBrainIdea(0, "Original idea");
	Dog copiedDog(originalDog);
	copiedDog.SetBrainIdea(0, "Copied idea");
	std::cout << "Original Dog's idea: " << originalDog.GetBrainIdea(0) << std::endl;
	std::cout << "Copied Dog's idea: " << copiedDog.GetBrainIdea(0) << std::endl;
	return 0;
}