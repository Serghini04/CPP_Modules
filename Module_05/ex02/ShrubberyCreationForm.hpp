/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:56:38 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/20 20:12:17 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include "AForm.hpp"
# include <fstream>

class	ShrubberyCreationForm : public AForm
{
	private :
		std::string	_target;

	public :
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &clone);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &clone);

		ShrubberyCreationForm(std::string target);
		void	execute(Bureaucrat const & executor) const;

		~ShrubberyCreationForm();
};
