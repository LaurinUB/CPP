/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:43:35 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/19 16:13:33 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP_
#define BITCOINEXCHANGE_HPP_

#define DATA "data.csv"

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>
#include <iomanip>
#include <map>
#include <utility>

class BitcoinExchange {
 public:
  static void exchange(std::string infile);

 private:
  static void parse_infile(std::string infile, std::map<std::string, float> data);
  static float  find_value(std::string tmpDate, float tmpVal, std::map<std::string, float> data);
  static float  to_float(std::string str);
  static std::map<std::string, float> parse_database();
  static bool validate_date(std::string date);
  static float validate_val(std::string val);
  BitcoinExchange();
  ~BitcoinExchange();
  BitcoinExchange(const BitcoinExchange& obj);
  BitcoinExchange& operator=(const BitcoinExchange& obj);
};

#endif  // BITCOINEXCHANGE_HPP_
