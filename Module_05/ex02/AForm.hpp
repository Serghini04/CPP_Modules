/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:49:18 by meserghi          #+#    #+#             */
/*   Updated: 2024/11/21 20:06:14 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class AForm
{
	private :
		const std::string	_Name;
		bool				_IsSigned;
		const int			_GradeToExecute;
		const int			_GradeToSign;

	public :

		AForm();
		AForm(const AForm & clone);
		AForm(std::string Name, int GradeToExecute, int GradeToSign);

		AForm	&operator=(const AForm & clone);

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

		virtual void	execute(Bureaucrat const & executor) const = 0;

		void	BeSigned(const Bureaucrat & B);

		virtual ~AForm();
};

std::ostream	&operator<<( std::ostream &out, const AForm &clone);
