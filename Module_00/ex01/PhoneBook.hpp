/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:50:11 by meserghi          #+#    #+#             */
/*   Updated: 2024/07/19 17:30:04 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

class PhoneBook
{
	private :
		Contact		_Contacts[8];
		int			_Size;
		int			_i;
	public :
		PhoneBook();
		int		Size();
		int		StringToInt(std::string	input);
		void	AddContact();
		void	PrintContacts();
		bool	Exit();
};