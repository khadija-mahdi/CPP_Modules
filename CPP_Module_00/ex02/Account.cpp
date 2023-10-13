/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:45:56 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/18 10:45:26 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(){
	return _nbAccounts;
}

int	Account::getTotalAmount(){
	return _totalAmount;
}

int	Account::getNbDeposits(){
	return _totalNbDeposits;	
}

int	Account::getNbWithdrawals(){
	return _totalNbWithdrawals;
}

int Account::checkAmount() const {
    return _amount;
}

void Account::_displayTimestamp(){
	time_t curr_time;
	tm * curr_tm;
	char date_string[100];
	char time_string[100];
	
	time(&curr_time);
	curr_tm = localtime(&curr_time);
	
	strftime(date_string, 50, "[%Y%m%d", curr_tm);
	strftime(time_string, 50, "%H%M%S]", curr_tm);
	
	std::cout << date_string << "-" << time_string;
	// std::cout << "[19920104_091532]";
}


Account::Account( int initial_deposit ): _accountIndex(_nbAccounts)
		, _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0){
	_displayTimestamp();
	_nbAccounts++;
	_totalAmount += _amount;
	std::cout << " index:" << _accountIndex<< ";"
	<< "amount:"<< _amount<< ";"
	<< "created" <<std::endl;
}
void Account::displayAccountsInfos(){
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts
    << ";total:" << _totalAmount
    << ";deposits:" << _totalNbDeposits
    << ";withdrawals:" << _totalNbWithdrawals
    << std::endl;
}

void Account::displayStatus() const {
	_displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount 
	<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit ){
	_displayTimestamp();
	std::cout << " index:" << _accountIndex
	<< ";p_amount:" << _amount;
	    _amount += deposit;
    _totalAmount += deposit;
    _totalNbDeposits++;
    _nbDeposits++;
    std::cout << ";deposit:" << deposit << ";amount:"
		<< _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
	if (_amount >= withdrawal) {
        std::cout << " index:" << _accountIndex << ";p_amount:" << _amount;
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;
        _nbWithdrawals++;
        std::cout << ";withdrawal:" << withdrawal << ";amount:" << _amount 
		<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
        return true;
    }
	std::cout << " index:" << _accountIndex
	 << ";p_amount:" << _amount 
	 << ";withdrawal:refused" << std::endl;
    return false;
}


Account::~Account(void) {	
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";"
	<< "amount:"<< _amount << ";"
	<< "closed" <<std::endl;
	_nbAccounts--;
	_totalAmount -= _amount;
}
