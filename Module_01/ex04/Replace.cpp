/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 17:02:52 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/04 12:18:57 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::~Replace( void )
{
	if (!_is_fail)
	{
		_fd_out.close();
		_fd_in.close();
	}
	std::cout << "========== End ==========\n";
}

bool		Replace::SetVar(std::string NameFile, std::string S1, std::string S2)
{
	_Name = NameFile;
	_s1 = S1;
	_s2 = S2;
	_fd_in.open(_Name.c_str(), std::ios::in);
	if(_s1.empty())
		return (_is_fail = true, false);
	if (!_fd_in.is_open())
	{
		std::cout << "Error : file "<< _Name << " not found ?\n";
		_is_fail = true;
		return (false);
	}
	_fd_out.open((_Name + ".replace").c_str(), std::ios::out);
	if (!_fd_out.is_open())
	{
		_fd_in.close();
		_is_fail = true;
		std::cout << "Error : failing to open file" << _Name + ".replace" << "?\n";
		return (false);
	}
	_is_fail = false;
	return (true);
}

std::string	Replace::ReplaceWord(std::string	line)
{
	std::string	res;
	int			pos;

	while (!line.empty())
	{
		pos = line.find(_s1);
		if (pos == -1)
		{
			res += line;
			break;
		}
		res += line.substr(0, pos);
		res += _s2;
		line.erase(0, pos + _s1.length());
	}
	return (res + '\n');
}

void	Replace::ReplaceFromFileToFile()
{
	std::string	line;

	while (std::getline(_fd_in, line))
	{
		_fd_out << ReplaceWord(line);
	}
}