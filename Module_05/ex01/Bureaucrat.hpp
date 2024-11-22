/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:53:56 by meserghi          #+#    #+#             */
/*   Updated: 2024/11/22 18:59:06 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include <iostream>
# include <exception>

class Form;

class Bureaucrat
{
	private :
		int					_Grade;
		const std::string	_Name;

	public :
		Bureaucrat();
		Bureaucrat( const Bureaucrat & clone);
		Bureaucrat(std::string Name, int Grade);

		Bureaucrat &operator=( const Bureaucrat & clone);

		int			getGrade() const;
		std::string	getName() const;

		void	increment();
		void	decrement();


		class GradeTooHighException : public std::exception
		{
    		public:
				const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public :
				const char *what() const throw();
		};

		void	signForm(Form & B);

		~Bureaucrat();
};


std::ostream	&operator<<( std::ostream &out, const Bureaucrat &clone);

// stack unwinding
