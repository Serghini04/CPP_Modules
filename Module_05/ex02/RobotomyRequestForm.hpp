/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:56:52 by meserghi          #+#    #+#             */
/*   Updated: 2024/11/21 22:47:06 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AForm.hpp"

class	RobotomyRequestForm : public AForm
{
	private :
		std::string	_target;
		bool		_Start;

	public :
		RobotomyRequestForm(std::string target);
		void	execute(Bureaucrat const & executor) const;
};
