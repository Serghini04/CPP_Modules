/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 12:49:52 by meserghi          #+#    #+#             */
/*   Updated: 2024/11/22 20:18:19 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class	Intern
{
	public :
		Intern();
		Intern(const Intern &clone);
		Intern &operator=( const Intern & clone);
		AForm	*makeForm(std::string nameForm, std::string target);
		class	FormNotFoundException : public std::exception
		{
			public :
				const char *what() const throw();
		};

		~Intern();
};
