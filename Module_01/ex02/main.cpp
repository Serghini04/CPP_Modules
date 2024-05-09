/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:39:38 by meserghi          #+#    #+#             */
/*   Updated: 2024/05/09 11:16:42 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// A reference cannot be null, while a pointer can point to NULL.
// it cannot be changed to refer to another object.



int main()
{
	std::string	str;
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	str = "HI THIS IS BRAIN";
	std::cout << "==== Memory address ====\n";
	std::cout << "    " <<  &str << std::endl;
	std::cout << "    " << &stringPTR << std::endl;
	std::cout << "    " << &stringREF << std::endl;
	std::cout << "========================\n";
	std::cout << "======== Value =========\n";
	std::cout << "    " << str << std::endl;
	std::cout << "    " << stringPTR << std::endl;
	std::cout << "    " << stringREF << std::endl;
	std::cout << "========================\n";
	return (0);
}