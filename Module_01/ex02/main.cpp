/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:39:38 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/06 09:53:05 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "==== Memory address ====\n";
	std::cout << "    " <<  &str << std::endl;
	std::cout << "    " << stringPTR << std::endl;
	std::cout << "    " << &stringREF << std::endl;
	std::cout << "========================\n";
	std::cout << "======== Value =========\n";
	std::cout << "    " << str << std::endl;
	std::cout << "    " << *stringPTR << std::endl;
	std::cout << "    " << stringREF << std::endl;
	std::cout << "========================\n";
	return (0);
}
