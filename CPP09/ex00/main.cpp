/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:16:17 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/19 16:14:38 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char *argv[]) {
  if (argc != 2) {
    std::cout << "Error: please input like: [ ./btc inputfile ]" << std::endl;
    return 1;
  }
  BitcoinExchange::exchange(argv[1]);
  return 0;
}
