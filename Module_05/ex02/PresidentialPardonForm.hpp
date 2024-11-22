/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:57:15 by meserghi          #+#    #+#             */
/*   Updated: 2024/11/22 12:46:30 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
