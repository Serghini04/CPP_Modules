/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:58:47 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/14 12:48:57 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string file)
{
	_fdDatabase.open("data.csv");
	if (_fdDatabase.fail())
		throw std::runtime_error("Error: data.csv not exist.");
	_fdInput.open(file);
	if (_fdInput.fail())
		throw std::runtime_error("Error: could not open file.");
	fillContianer();
}


csv	BitcoinExchange::fillCSV(std::string &line)
{
	int		i;
	char	*buf;
	csv		data;
	int		value;

	value = 0;
	if (line.empty())
		throw std::runtime_error("Error: Empty line in database invalid");;
	for (i = 0; line[i] && i <= 10; i++)
	{
		if (std::isdigit(line[i]) && i != 4 && i != 7 && i != 10)
			value = value * 10 + (line[i] - 48);
		else if (line[i] == '-' && (i == 4 || i == 7))
		{
			if (i == 4)
				data.year = value;
			else if (i == 7)
				data.month = value;
			value = 0;
		}
		else if (line[i] == ',' && i == 10 && std::isdigit(line[i + 1]))
		{
			data.day = value;
			data.btc = strtof(&line[i + 1], &buf);
			if (buf && *buf)
				throw std::runtime_error("Error: btc in database invalid");
		}
		else
			throw std::runtime_error("Error: database invalid");
	}
	if (i <= 10)
		throw std::runtime_error("Error: database invalid");
	return data;
}

csv	BitcoinExchange::fillCSVInput(std::string &line)
{
	int		i;
	char	*buf;
	csv		data;
	int		value;
	std::vector<int> c;
    c.push_back(4);
    c.push_back(7);
    c.push_back(10);
    c.push_back(11);
    c.push_back(12);

	value = 0;

	if (line.empty())
		return data.e = eEmptyLine, data;
	for (i = 0; line[i] && i <= 12; i++)
	{
		if (std::isdigit(line[i]) && std::find(c.begin(), c.end(), i) == c.end())
			value = value * 10 + (line[i] - 48);
		else if (line[i] == '-' && (i == 4 || i == 7))
		{
			if (i == 4)
				data.year = value;
			else if (i == 7)
				data.month = value;
			value = 0;
		}
		else if (line[i] == ' ' && i == 12 && std::isdigit(line[i + 1]))
		{
			data.day = value;
			data.btc = strtod(&line[i + 1], &buf);
			if (buf && *buf)
				return data.e = eBtcInvalid, data;
		}
		else if (line[i] == ' ' && i == 12 && line[i + 1] == '-')
			return data.e = eBtcTooLow, data;
		else if (i != 10 && i != 11 && i != 13)
			return data.e = eBadInput, data;
	}
	if (i <= 12)
		return data.e = eBadInput, data;
	data.e = eCorrect;
	return data;
}

void	BitcoinExchange::putError(excep e, std::string line)
{
	switch(e)
	{
		case eCorrect :
			break;
		case eEmptyLine :
			std::cout << "Error: empty line.\n";
			break;
		case eBadInput :
			std::cout << "Error: bad input => " << line << "\n";
			break;
		case eInvalidDate :
			std::cout << "Error: invalid date.\n";
			break;
		case eBtcTooLow :
			std::cout << "Error: not a positive number.\n";
			break;
		case eBtcTooHigh :
			std::cout << "Error: too large a number.\n";
			break;
		case eBtcInvalid :
			std::cout << "Error: invalid btc.";
			break;
	}
}

bool	BitcoinExchange::isLeapYear(int year)
{
    if (year % 4 != 0)
		return false;
    if (year % 100 != 0)
		return true;
    if (year % 400 != 0)
		return false;
    return true;
}

bool	BitcoinExchange::parseData(csv &data, std::string &line)
{
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if (data.e != eCorrect)
		return putError(data.e, line), false;
	if (data.btc < 0)
		return putError(eBtcTooLow, line), false;
	else if (data.btc > 1000)
		return putError(eBtcTooHigh, line), false;
	if (data.year < 2009 || data.month < 1 || data.month > 12 || data.day < 1)
		return putError(eInvalidDate, line), false;
	if (isLeapYear(data.year) && data.month == 2)
		daysInMonth[1] = 29;
	if (data.day > daysInMonth[data.month - 1])
		return putError(eInvalidDate, line), false;
	return true;
}

bool operator==(const csv &data1, const csv &data2)
{
    return data1.year == data2.year && data1.month == data2.month && data1.day == data2.day;
}

bool operator<(const csv &data1, const csv &data2)
{
    if (data1.year != data2.year)
        return data1.year < data2.year;
    if (data1.month != data2.month)
        return data1.month < data2.month;
    return data1.day < data2.day;
}


float	BitcoinExchange::binarySearchLower(std::vector<csv> &database, csv data)
{
    int l = 0;
    int r = database.size() - 1;
    int s;
    while (l <= r)
    {
        s = l + (r - l) / 2;
        if (data == database[s])
            return database[s].btc * data.btc;
        if (data < database[s])
            r = s - 1;
        else
            l = s + 1;
    }
    if (r >= 0)
        return database[r].btc * data.btc;
    return -1;
}

void	BitcoinExchange::getAmountOfBitcoin()
{
	int	check = 0;
	std::string	line;
	csv	data;

	getline(_fdInput, line);
	if (line.empty() || line != "date | value")
		throw std::runtime_error("Error: The first line should be either \"date | value\"");
	while (getline(_fdInput, line))
	{
		check = 1;
		data = fillCSVInput(line);
		if (parseData(data, line))
		{
			std::cout << std::setfill('0') << std::setw(4) << data.year << "-"
					<< std::setw(2) << data.month << "-"
					<< std::setw(2) << data.day << " => "
					<< data.btc << " = ";
			float res = binarySearchLower(_database, data);
			if (res == - 1)
				std::cout << "Invalid\n";
			else
				std::cout << res << "\n";
		}
	}
	if (!check)
		throw std::runtime_error("Error: Empty data in the input");
}

void	BitcoinExchange::fillContianer()
{
	int	check = 0;
	std::string	line;

	getline(_fdDatabase, line);
	if (line.empty() || line != "date,exchange_rate")
		throw std::runtime_error("Error: The first line should be either \"date,exchange_rate\"");
	while (getline(_fdDatabase, line))
	{
		check = 1;
		_database.push_back(fillCSV(line));
	}
	if (!check)
		throw std::runtime_error("Error: Empty data in the database");
}

BitcoinExchange::~BitcoinExchange()
{
	_fdDatabase.close();
	_fdInput.close();
}
