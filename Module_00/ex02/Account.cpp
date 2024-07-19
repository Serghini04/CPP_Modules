/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 15:05:16 by meserghi          #+#    #+#             */
/*   Updated: 2024/07/19 17:36:23 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::_displayTimestamp( void )
{
	std::time_t	MyTime = std::time(0);
	std::cout << "[";
	std::cout << std::setfill('0') << std::localtime(&MyTime)->tm_year + 1900;
	std::cout << std::setw(2) << std::localtime(&MyTime)->tm_mon + 1;
	std::cout << std::setw(2) << std::localtime(&MyTime)->tm_mday << "_";
	std::cout << std::setw(2) << std::localtime(&MyTime)->tm_hour;
	std::cout << std::setw(2) << std::localtime(&MyTime)->tm_min;
	std::cout << std::setw(2) << std::localtime(&MyTime)->tm_sec << "] ";
}

Account::Account( int initial_deposit )
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created\n";
}

Account::Account( void )
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = 0;
	_nbDeposits = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _nbDeposits << ";created\n";
}

Account::~Account( void )
{
	_displayTimestamp();
	_nbAccounts--;
	std::cout << "index:" << _accountIndex << ";amount:" \
		<< _amount << ";closed\n";
	_totalAmount -= _amount;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:"<< Account::getNbAccounts() << \
		";total:" << Account::getTotalAmount() <<\
		";deposits:" << Account::getNbDeposits() <<\
		";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:"<< _accountIndex << \
		";amount:" << _amount <<\
		";deposits:" << _nbDeposits <<\
		";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	std::cout << "index:"<< _accountIndex << \
		";p_amount:" << _amount <<\
		";deposit:" << deposit;
		_amount += deposit;
	std::cout << ";amount:" << _amount <<\
		";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << \
			";p_amount:" << _amount << \
			";withdrawal:";
	if (withdrawal > checkAmount())
	{
		std::cout << "refused\n";
		return (false);
	}
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	std::cout << withdrawal << \
		";amount:" << checkAmount() << \
		";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}
