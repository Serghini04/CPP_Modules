/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:58:20 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/14 13:29:48 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include <iostream>
# include <vector>
# include <fstream>
# include <exception>
# include <iomanip>

enum excep
{
	eCorrect,
	eEmptyLine,
	eBadInput,
	eInvalidDate,
	eBtcTooLow,
	eBtcTooHigh,
	eBtcInvalid
};

struct csv
{
	int			year;
	int			month;
	int			day;
	float		btc;
	excep		e;
};

class BitcoinExchange
{
	private :
		std::fstream		_fdInput;
		std::string			_filePath;
		std::vector<csv>	_database;
		std::fstream		_fdDatabase;
		csv		fillCSV(std::string &line);
		void	fillContainer();
		csv		fillCSVInput(std::string &line);
	public :
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &clone);
		BitcoinExchange(std::string	file);

		BitcoinExchange& operator=(const BitcoinExchange& clone);
		bool	parseData(csv &data, std::string &line);
		void	putError(excep e, std::string line);
		bool	isLeapYear(int year);
		void	getAmountOfBitcoin();
		float	binarySearchLower(std::vector<csv> &database, csv data);

		~BitcoinExchange();
};

bool	operator==(const csv &data1, const csv &data2);
bool	operator<(const csv &data1, const csv &data2);