/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 17:54:07 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/26 13:35:37 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include <vector>
# include <iostream>
# include <algorithm>

class Span
{
	private :
		unsigned int		_max;
		std::vector<int>	_v;
	public :
		Span();
		Span(const Span &clone);
		Span &operator=(const Span &clone);
		Span(unsigned int N);
		void	addNumber(int value);
		long	shortestSpan();
		long	longestSpan();
		template<typename it>
		void	fillSpan(it &s, it &e)
		{
			while (s != e)
			{
				addNumber(*s);
				s++;
			}
		}

		~Span();
};
