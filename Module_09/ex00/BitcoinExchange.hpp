/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:58:20 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/13 16:17:42 by meserghi         ###   ########.fr       */
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
		std::vector<csv>	_database;
		std::fstream		_fdDatabase;
		csv		fillCSV(std::string &line);
		void	fillContianer();
		csv		fillCSVInput(std::string &line);
	public :
		BitcoinExchange(std::string	file);
		bool	parseData(csv &data, std::string &line);
		void	putError(excep e, std::string line);
		bool	isLeapYear(int year);
		void	getAmountOfBitcoin();
		float	binarySearchLower(std::vector<csv> &database, csv data);
		~BitcoinExchange();
};

bool	operator==(const csv &data1, const csv &data2);
bool	operator<(const csv &data1, const csv &data2);