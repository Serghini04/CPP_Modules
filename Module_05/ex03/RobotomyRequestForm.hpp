/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:56:52 by meserghi          #+#    #+#             */
/*   Updated: 2024/11/22 18:58:30 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include "AForm.hpp"

class	RobotomyRequestForm : public AForm
{
	private :
		std::string	_target;

	public :
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &clone);
		RobotomyRequestForm(std::string target);

		void	execute(Bureaucrat const & executor) const;
		RobotomyRequestForm &operator=(const RobotomyRequestForm &clone);

		~RobotomyRequestForm();
};
