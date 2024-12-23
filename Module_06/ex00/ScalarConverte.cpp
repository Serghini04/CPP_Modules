/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 09:58:26 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/23 11:28:47 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverte.hpp"


ScalarConverte::ScalarConverte()
{

}

ScalarConverte::ScalarConverte(const ScalarConverte &clone)
{
	(void)clone;
}

ScalarConverte &ScalarConverte::operator=(const ScalarConverte &clone)
{
	(void)clone;
	return *this;
}

bool	HasDouble(std::string &str)
{
	bool	res;

	res = false;
	for (int i = 0; str[i]; i++)
	{
		if (!res && str[i] == '.')
			res = true;
		else if (str[i] == '.')
			return false;
	}
	if (str.size() > 1 && str[str.size() - 1] == 'f')
		return true;
	return res;
}

void	printConvertInt(double nb)
{
	if ((nb >= 0  && nb <= 255) && std::isprint(static_cast<char>(nb)))
		std::cout << "char: '" << static_cast<char>(nb) << "'\n";
	else
		std::cout << "char: " << "Non displayable" << "\n";
	if (nb > INT_MAX || nb < INT_MIN)
		std::cout << "int: impossible\n";
	else
		std::cout << "int: " << static_cast<int>(nb) << "\n";
	std::cout << "float: " << static_cast<float>(nb) << "f" << "\n";
	std::cout << "double: " << nb << "\n";
}

void	printConvertChar(char c)
{
	if (std::isprint(c))
		std::cout << "char: '" << c << "'\n";
	else
		std::cout << "char: " << "Non displayable" << "\n";
	std::cout << "int: " << static_cast<int>(c) << "\n";
	std::cout << "float: " << static_cast<float>(c) << "f" << "\n";
	std::cout << "double: " << static_cast<double>(c) << "\n";
}

void	printConvertDouble(double nb)
{
	if (std::isprint(static_cast<char>(nb)))
		std::cout << "char: '" << static_cast<char>(nb) << "'\n";
	else
		std::cout << "char: " << "Non displayable" << "\n";
	std::cout << "int: " << static_cast<int>(nb) << "\n";
	std::cout << "float: " << static_cast<float>(nb) << "f" << "\n";
	std::cout << "double: " << nb << "\n";
}

void	printConvertFloat(float nb)
{
	if (std::isprint(static_cast<char>(nb)))
		std::cout << "char: '" << static_cast<char>(nb) << "'\n";
	else
		std::cout << "char: " << "Non displayable" << "\n";
	std::cout << "int: " << static_cast<int>(nb) << "\n";
	std::cout << "float: " << nb << "f" << "\n";
	std::cout << "double: " << static_cast<double>(nb) << "\n";
}

void	printConvertInvalid(int isImp)
{
	std::cout << "char: " << "impossible\n";
	std::cout << "int: " << "impossible\n";
	if (isImp)
	{
		std::cout << "float: " << "impossible\n";
		std::cout << "double: " << "impossible\n";
	}
	else
	{
		std::cout << "float: " << "nanf\n";
		std::cout << "double: " << "nan\n";
	}
}
void	printConvertInf(std::string	&str)
{
	std::cout << "char: " << "impossible\n";
	std::cout << "int: " << "impossible\n";
	if (str == "-inf" ||  str == "+inf" || str == "inf")
	{
		std::cout << "float: " << str << "f\n";
		std::cout << "double: " << str << "\n";
	}
	else
	{
		std::cout << "float: " << str << "\n";
		std::cout << "double: " << str.substr(0, str.size() - 1) << "\n";
	}
}

void	checkPseudo(std::string &str)
{
	bool		isPesudo;
	std::string	print;

	isPesudo = false;
	if (str == "-inf" || str == "-inff")
		printConvertInf(str);
	else if (str == "+inff" || str == "+inf" || str == "inf"  || str == "inff")
		printConvertInf(str);
	else if (str == "nan" || str == "nanf")
		printConvertInvalid(0);
	else
		return ;
	exit (0);
}

eTypes	getType(std::string &str)
{
	char	*trash;
	bool	isDouble;
	double	nb;

	if (str.empty())
		return eImpossible;
	if (std::isalpha(str[0]) && !str[1])
		return eChar;
	isDouble = HasDouble(str);
	nb = strtod(str.c_str(), &trash);
	if (isDouble && trash[0] == 'f' && !trash[1])
		return eFloat;
	else if (isDouble && !trash[0])
		return eDouble;
	else if (!isDouble && !trash[0])
		return eInt;
	return eImpossible;
}

void	ScalarConverte::convert(std::string str)
{
	char	*trash = NULL;

	checkPseudo(str);
	eTypes	type = getType(str);
	switch (type)
	{
		case (eChar) :
			strtod(str.c_str(), &trash);
			printConvertChar(trash[0]);
			break ;
		case (eInt) :
			printConvertInt(strtod(str.c_str(), &trash));
			break ;
		case (eFloat) :
			printConvertFloat(strtod(str.c_str(), &trash));
			break ;
		case (eDouble) :
			printConvertDouble(strtod(str.c_str(), &trash));
			break;
		case (eImpossible) :
			printConvertInvalid(1);
			break ;
	}
}

ScalarConverte::~ScalarConverte()
{

}