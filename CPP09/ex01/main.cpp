/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:54:20 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/19 17:13:38 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char *argv[]) {
  if (argc != 2) {
    std::cout << "Error: wront amout of arguments." << std::endl;
    return 1;
  }
  RPN::rpn(argv[1]);
  return 0;
}
