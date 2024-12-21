/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:57:15 by meserghi          #+#    #+#             */
/*   Updated: 2024/11/22 18:59:25 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private :
		std::string _target;
	public :
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &clone);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &clone);

		PresidentialPardonForm(std::string target);
		void	execute(Bureaucrat const & executor) const;

		~PresidentialPardonForm();
};
