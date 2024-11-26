/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 09:58:39 by meserghi          #+#    #+#             */
/*   Updated: 2024/11/26 13:02:18 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include <iostream>
# include <cstdlib>

enum eTypes
{
	eChar,
	eInt,
	eFloat,
	eDouble,
	eImpossible
};

class	ScalarConverte
{
	private :
		ScalarConverte();
		ScalarConverte(const ScalarConverte &clone);
		ScalarConverte &operator=(const ScalarConverte &clone);
		~ScalarConverte();
	public :
		static void	convert(std::string str);
	class GradeTooHighException : public std::exception
	{
    	public:
			const char *what() const throw();
	};
};

eTypes	getType(std::string &str);
