/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 17:04:13 by meserghi          #+#    #+#             */
/*   Updated: 2024/05/10 12:09:38 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>

class Replace
{
	private:
		std::string		_name;
		std::string		_s1;
		std::string		_s2;
		std::fstream	_fd_in;
		std::fstream	_fd_out;
		bool			_is_fail;
	public:
		~Replace( void );
		bool		ReadInput( void );
		std::string	ReplaceWord(std::string	line);
		void		ReplaceFromFileToFile();
};

#endif