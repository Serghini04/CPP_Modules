/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:56:38 by meserghi          #+#    #+#             */
/*   Updated: 2024/11/22 18:58:31 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include "AForm.hpp"

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
