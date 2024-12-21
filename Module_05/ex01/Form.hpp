/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:49:18 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/21 10:24:48 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Form
{
	private :
		const std::string	_Name;
		bool				_IsSigned;
		const int			_GradeToExecute;
		const int			_GradeToSign;

	public :

		Form();
		Form(const Form & clone);
		Form(std::string Name, int GradeToExecute, int GradeToSign);

		Form	&operator=(const Form & clone);

		std::string	getName() const;
		bool	getIsSigned() const;
		int		getGradeToSign() const;
		int		getGradeToExecute() const;

		class GradeTooHighException : public std::exception
		{
			public :
				const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public :
				const char *what() const throw();
		};

		void	beSigned(const Bureaucrat & B);
		~Form();
};

std::ostream	&operator<<( std::ostream &out, const Form &clone);
