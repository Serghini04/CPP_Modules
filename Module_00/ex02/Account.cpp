/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 15:05:16 by meserghi          #+#    #+#             */
/*   Updated: 2024/05/06 21:04:34 by meserghi         ###   ########.fr       */
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

void	_displayTimestamp( void )
{
	std::time_t	MyTime = std::time(0);
	std::cout << "[";
	std::cout << std::setfill('0') << std::localtime(&MyTime)->tm_year + 1900 <<std::flush;
	std::cout << std::setw(2) << std::localtime(&MyTime)->tm_mon + 1 <<std::flush;
	std::cout << std::setw(2) << std::localtime(&MyTime)->tm_mday << "_" <<std::flush;
	std::cout << std::setw(2) << std::localtime(&MyTime)->tm_hour <<std::flush;
	std::cout << std::setw(2) << std::localtime(&MyTime)->tm_min <<std::flush;
	std::cout << std::setw(2) << std::localtime(&MyTime)->tm_sec << "] " <<std::flush;
}

Account::Account( int initial_deposit )
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_nbDeposits = initial_deposit;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _nbDeposits << ";created\n";
}

Account::Account( void )
{
	_accountIndex = 0;
	_amount = 0;
	_nbWithdrawals = 0;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" \
		<< _nbDeposits << ";closed\n";
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:"<< Account::getNbAccounts() << \
		";total:" << Account::getTotalAmount() <<\
		";deposits:" << Account::getNbDeposits() <<\
		";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:"<< _accountIndex << \
		";amount:" << _amount <<\
		";deposits:" << _nbDeposits <<\
		";withdrawals:" << _nbWithdrawals << std::endl;
}

