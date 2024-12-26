/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 17:51:01 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/26 14:47:12 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(10);
		sp.addNumber(42);
		sp.addNumber(1);
		sp.addNumber(2);
		sp.addNumber(5555552);
		sp.addNumber(-42);

		std::cout << "Shortest Span Here is :  " << sp.shortestSpan() << "\n";
		std::cout << "Longest Span Here is :  " << sp.longestSpan() << "\n";

	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << "\n";
	}

	return 0;
}
