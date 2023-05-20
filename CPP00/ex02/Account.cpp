/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 13:37:29 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/20 13:08:37 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>
#include <iomanip>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(void) {
  return;
}

Account::Account(int initial_deposit) {
  static int  index;

  this->_displayTimestamp();
  this->_amount = initial_deposit;
  this->_accountIndex = index;
  index++;
  _totalAmount += this->_amount;
  _nbAccounts++;
  std::cout << "index:" << this->_accountIndex << ";";
  std::cout << "amount:" << this->_amount << ";";
  std::cout << "created" << std::endl;
  return;
}

Account::~Account(void) {
  this->_displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";";
  std::cout << "amount:" << this->_amount << ";";
  std::cout << "closed" << std::endl;
  return;
}

void  Account::_displayTimestamp(void) {
  time_t  now = time(0);
  tm  *ltm = localtime(&now);

  std::cout << std::setfill('0') << "[" << 1900 + ltm->tm_year;
  std::cout << std::setw(2) << ltm->tm_mday;
  std::cout << std::setw(2) << 1 + ltm->tm_mon << "_";
  std::cout << std::setw(2) << ltm->tm_hour;
  std::cout << std::setw(2) << ltm->tm_min;
  std::cout << std::setw(2) << ltm->tm_sec << "] ";
}

void  Account::displayAccountsInfos(void) {
  _displayTimestamp();
  std::cout << "accounts:" << getNbAccounts() << ";";
  std::cout << "total:" << getTotalAmount() << ";";
  std::cout << "deposits:" << getNbDeposits() << ";";
  std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void  Account::makeDeposit(int deposit) {
  this->_displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";";
  std::cout << "p_amount:" << this->_amount << ";";
  this->_amount += deposit;
  _totalAmount += deposit;
  _nbDeposits++;
  _totalNbDeposits++;
  std::cout << "deposit:" << deposit << ";";
  std::cout << "amount:" << this->_amount << ";";
  std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool  Account::makeWithdrawal(int withdrawal) {
  this->_displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";";
  std::cout << "p_amount:" << this->_amount << ";";
  std::cout << "withdrawl:";
  if (this->_amount - withdrawal < 0) {
    std::cout << "refused" << std::endl;
    return (false);
  }
  this->_amount -= withdrawal;
  _totalAmount -= withdrawal;
  _nbWithdrawals++;
  _totalNbWithdrawals++;
  std::cout << withdrawal << ";";
  std::cout << "amount:" << this->_amount << ";";
  std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
  return (true);
}

void  Account::displayStatus(void) const {
  this->_displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";";
  std::cout << "amount:" << this->_amount << ";";
  std::cout << "deposits:" << this->_nbDeposits << ";";
  std::cout << "withdrawls:" << this->_nbWithdrawals << std::endl;
}

int Account::getNbAccounts(void) {
  return (_nbAccounts);
}

int Account::getTotalAmount(void) {
  return (_totalAmount);
}

int Account::getNbDeposits(void) {
  return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void) {
  return (_totalNbWithdrawals);
}
