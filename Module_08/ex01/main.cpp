/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 17:51:01 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/09 12:00:43 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

int main()
{
	Span sp = Span(10);
	// Span Test = fillSpan(10);
	sp.addNumber(0);
	sp.addNumber(1);
	// sp.addNumber(INT_MAX);
	// // sp.addNumber(INT_MIN);
	// // sp.addNumber(0);
	// // sp.addNumber(17);
	// // sp.addNumber(-111);
	// sp.addNumber(-1222212);
	// sp.addNumber(INT_MIN);
	// sp.addNumber(1);

	std::cout << "Shortest Span Here is :  " << sp.shortestSpan() << "\n";
	std::cout << "Longest Span Here is :  " << sp.longestSpan() << "\n";

	// std::cout << "Shortest Span Here is :  " << Test.shortestSpan() << "\n";
	// std::cout << "Longest Span Here is :  " << Test.longestSpan() << "\n";

	return 0;
}
