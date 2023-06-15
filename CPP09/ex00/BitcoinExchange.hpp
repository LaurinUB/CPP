/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:43:35 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/15 18:18:32 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP_
#define BITCOINEXCHANGE_HPP_

#include <string>
#include <iostream>
#include <map>

class BitcoinExchange {
 public:
  static void exchange(std::string csv_file);

 private:
  BitcoinExchange();
  ~BitcoinExchange();
  BitcoinExchange(const BitcoinExchange& obj);
  BitcoinExchange& operator=(const BitcoinExchange& obj);
};

#endif  // BITCOINEXCHANGE_HPP_
