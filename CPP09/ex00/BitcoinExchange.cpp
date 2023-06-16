/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:20:31 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/16 17:31:47 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& obj) {
*this = obj;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& obj) {
  if (this != &obj) {
    *this = obj;
  }
  return *this;
}

void parse_infile(std::string infile) {
  std::ifstream in;

  in.open(infile);
  if (!in.is_open()) {
    std::cout << "Could not open file!" << std::endl;
    return;
  }
}

void  BitcoinExchange::exchange(std::string infile) {
  parse_infile(infile);
}
