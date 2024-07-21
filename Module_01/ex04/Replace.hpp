/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 17:04:13 by meserghi          #+#    #+#             */
/*   Updated: 2024/07/21 16:02:20 by meserghi         ###   ########.fr       */
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
		void		ReplaceFromFileToFile();
		std::string	ReplaceWord(std::string	line);
		bool		SetVar(std::string NameFile, std::string S1, std::string S2);
};

#endif