/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:13:34 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/23 12:05:26 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "A.hpp"
# include "B.hpp"
# include "C.hpp"
# include <ctime>
# include <unistd.h>

Base	*generate(void)
{
	int	getRand;

	getRand = (std::rand() % 3) + 1;
	switch (getRand)
	{
		case (1) :
			return (new A());
		case (2) :
			return (new B());
		case (3) :
			return (new C());
	}
	return (NULL);
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Actual type is : A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "Actual type is : B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "Actual type is : C\n";
	else
		std::cout << "Actual type is : Unknown\n";
}

void	identify(Base &p)
{
	try
	{
		A& res = dynamic_cast<A&>(p);
		(void)res;
		std::cout << "Actual type is : A\n";
		return ;
	}
	catch (const std::bad_cast &e) {}
	try
	{
		B& res = dynamic_cast<B&>(p);
		(void)res;
		std::cout << "Actual type is : B\n";
		return ;
	}
	catch (const std::bad_cast &e) {}
	try
	{
		C& res = dynamic_cast<C&>(p);
		(void)res;
		std::cout << "Actual type is : C\n";
		return ;
	}
	catch (const std::bad_cast &e) {}
	std::cout << "Actual type is : Unknown\n";

}

int main()
{
	Base *B;

	std::srand(time(0));
	for (int  i = 0; i < 5; i++)
	{
		std::cout << "Guess What actual type is ?\n";
		B = generate();
		identify(B);
		identify(*B);
		delete B;
	}
	return 0;
}