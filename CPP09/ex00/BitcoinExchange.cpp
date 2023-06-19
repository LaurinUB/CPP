/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:20:31 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/19 16:12:47 by luntiet-         ###   ########.fr       */
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

bool  BitcoinExchange::validate_date(std::string date) {
  std::tm tm = {};

  if (!strptime(date.c_str(), "%Y-%m-%d", &tm)) {
    return false;
  }
  return true;
}

float BitcoinExchange::validate_val(std::string val) {
  std::stringstream ss(val);
  float f;

  ss >> f;
  if (!ss.eof()) {
    std::cout << "Error: not a Float value." << std::endl;
    return -1.0;
  } else if (f < 0.0) {
    std::cout << "Error: not a positive number." << std::endl;
    return -1.0;
  } else if (f > 1000.0) {
    std::cout << "Error: too large a number." << std::endl;
    return -1.0;
  }
  return f;
}

float BitcoinExchange::find_value(std::string tmpDate, float tmpVal, std::map<std::string, float> data) {
  std::map<std::string, float>::iterator it;
  it = data.lower_bound(tmpDate);
  return (it->second * tmpVal);
}

void  BitcoinExchange::parse_infile(std::string infile, std::map<std::string, float> data) {
  std::ifstream in;
  std::string tmp;
  std::string tmpDate;
  std::string tmpVal;
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
    f = validate_val(tmpVal);
    if (f >= 0.0 && f <= 1000.0) {
      std::cout << tmpDate << " => " <<  tmpVal << " = "
        << find_value(tmpDate, f, data) << std::endl;
    }
    in >> tmpDate;
  }
}

float BitcoinExchange::to_float(std::string str) {
  std::istringstream iss(str);
  float f;

  iss >> f;
  return f;
}

std::map<std::string, float> BitcoinExchange::parse_database() {
  std::ifstream data;
  std::map<std::string, float> res;
  std::string tmp;
  std::string date;

  data.open(DATA);
  if (!data.is_open()) {
    std::cout << "Error: could not find database." << std::endl;
  }
  data >> tmp;
  while (!data.eof()) {
    data >> tmp;
    date = tmp.substr(0, tmp.find(','));
    tmp = tmp.substr(tmp.find(',') + 1, tmp.size());
    res.insert(make_pair(date, to_float(tmp)));
  }
  return res;
}

void  BitcoinExchange::exchange(std::string infile) {
  std::map<std::string, float> data;
  data = parse_database();
  parse_infile(infile, data);
}
