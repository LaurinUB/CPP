/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:20:31 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/19 11:14:37 by luntiet-         ###   ########.fr       */
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

bool  validate_date(std::string date) {
  std::tm tm = {};

  if (!strptime(date.c_str(), "%Y-%m-%d", &tm)) {
    return false;
  }
  return true;
}

bool validate_val(std::string val) {
  std::stringstream ss(val);
  float f;

  ss >> f;
  if (!ss.eof()) {
    std::cout << "Error: not a Float value." << std::endl;
    return false;
  } else if (f < 0.0) {
    std::cout << "Error: not a positive number." << std::endl;
    return false;
  } else if (f > 1000.0) {
    std::cout << "Error: too large a number." << std::endl;
    return false;
  }
  return true;
}

void  parse_infile(std::string infile) {
  std::ifstream in;
  std::string tmp;
  std::string tmpDate;
  std::string tmpVal;
  std::map<std::string, float> output;
  float f;

  in.open(infile.c_str());
  if (!in.is_open()) {
    std::cout << "Error: could not open file." << std::endl;
    return;
  }
  in >> tmpDate;
  while (!in.eof()) {
    if (!validate_date(tmpDate)) {
      std::cout << "Error: bad input => " << tmpDate << std::endl;
      in >> tmpDate;
      continue;
    }
    in >> tmp;
    if (tmp.compare("|")) {
      std::cout << "Error: no delimiter" << std::endl;
      continue;
    }
    in >> tmpVal;
    if (validate_val(tmpVal)) {
      std::stringstream ss(tmpVal);
      ss >> f;
      output.insert(make_pair(tmpDate, f));
      std::cout << tmpDate << " => ";
      std::cout << output.at(tmpDate) << std::endl;
    }
    in >> tmpDate;
  }
}

void  BitcoinExchange::exchange(std::string infile) {
  parse_infile(infile);
}
