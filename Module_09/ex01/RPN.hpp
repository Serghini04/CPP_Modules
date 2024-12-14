/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 14:59:38 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/14 20:07:39 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include <iostream>
# include <stack>

enum cal
{
	eAdd,
	eSub,
	eMul,
	eDiv
};

class	RPN
{
	private :
		std::stack<double>	_s;
	public :
		RPN();
		RPN(const RPN &clone);
		RPN &operator=(const RPN &clone);
		void	useRPN(std::string line);
		void applyCalcul(char c);
		~RPN();
};