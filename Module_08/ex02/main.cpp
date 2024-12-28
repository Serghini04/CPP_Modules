/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:09:08 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/28 10:15:45 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MutantStack.hpp"
# include <stack>
# include <vector>


int main()
{
	try
	{
		MutantStack<int> s;
		s.push(24);
		s.push(24);
		s.push(24);
		s.push(24);

		std::cout << *s.begin() <<"\n";
		std::cout << *s.end() <<"\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}