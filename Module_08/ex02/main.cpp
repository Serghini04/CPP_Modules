/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:09:08 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/09 16:37:54 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MutantStack.hpp"
# include <stack>
# include <vector>


int main()
{
	MutantStack<int> s;
	s.push(24);
	s.push(24);
	s.push(24);
	s.push(24);
	s.push(24);

	const MutantStack<int> s1(s);
	std::cout << *s1.begin() <<"\n";
	return 0;
}