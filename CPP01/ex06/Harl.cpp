/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 08:43:05 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/20 14:23:47 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {
  this->functions_[0] = &Harl::debug;
  this->functions_[1] = &Harl::info;
  this->functions_[2] = &Harl::warning;
  this->functions_[3] = &Harl::error;

  this->levels_[0] = "DEBUG";
  this->levels_[1] = "INFO";
  this->levels_[2] = "WARNING";
  this->levels_[3] = "ERROR";
}

Harl::~Harl(void) {
  return;
}

void  Harl::debug(void) {
  std::cout << GREEN "[ DEBUG ]" << std::endl;
  std::cout << "I love having extra bacon for my"
    << "8XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
  std::cout << "I really do!" WHITE << std::endl << std::endl;
}

void  Harl::info(void) {
  std::cout << GREEN "[ INFO ]" << std::endl;
  std::cout << "I cannot believe adding extra bacon costs more money."
    << std::endl;
  std::cout << "You didn’t put enough bacon in my burger!" << std::endl;
  std::cout <<"If you did, I wouldn’t be asking for more!" WHITE
    << std::endl << std::endl;
}

void  Harl::warning(void) {
  std::cout << GREEN "[ WARNING ]" << std::endl;
  std::cout << "I think I deserve to have some extra bacon for free."
    << std::endl;
  std::cout << "I’ve been coming for years whereas you started working here"
    << "since last month." WHITE << std::endl << std::endl;
}

void  Harl::error(void) {
  std::cout << GREEN "[ ERROR ]" << std::endl;
  std::cout << "This is unacceptable! I want to speak to the manager now."
    << WHITE << std::endl << std::endl;
}

void  Harl::complain(std::string level) {
  enum  Case { DEBUG, INFO, WARNING, ERROR };
  int i = 0;

  while (!levels_[i].empty() && level.compare(levels_[i])) {
    i++;
  }

  switch (i) {
    case DEBUG:
      this->debug();
    case INFO:
      this->info();
    case WARNING:
      this->warning();
    case ERROR:
      this->error();
      break;
    default:
    std::cout << GREEN "[ Probably complaining about insignificant problems ]"
      << WHITE << std::endl << std::endl;
  }
}
