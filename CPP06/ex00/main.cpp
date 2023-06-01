/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 09:34:44 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/01 21:35:50 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv) {
  if (argc < 2) {
    std::cout << "Please put in a Value." << std::endl;
    return 1;
  } else if (argc > 2) {
    std::cout << "To many arguments!" << std::endl;
    return 1;
  }
  ScalarConverter::convert(argv[1]);
  return 0;
}
