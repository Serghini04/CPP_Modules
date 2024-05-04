/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:50:11 by meserghi          #+#    #+#             */
/*   Updated: 2024/05/04 14:46:12 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

class PhoneBook
{
	private :
		Contact		_Contacts[8];
		int			_i;
	public :
		PhoneBook();
		void	AddContact();
		void	PrintContacts();
		bool	Exit();
};