/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:37:55 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/26 14:46:39 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
  try {
    std::cout << "trying to initiate with Bureaucrat(\"Bob\", 10)"
      << std::endl;
    Bureaucrat bob = Bureaucrat("Bob", 10);
    std::cout << bob;
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << std::endl;
  try {
    std::cout << "trying to initiate with Bureaucrat(\"ToHigh\", 0)"
      << std::endl;
    Bureaucrat toHigh = Bureaucrat("ToHigh", 0);
    std::cout << toHigh << std::endl;
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << std::endl;
  try {
    std::cout << "trying to initiate with Bureaucrat(\"toLow\", 200)"
      << std::endl;
    Bureaucrat toLow = Bureaucrat("ToHigh", 200);
    std::cout << toLow << std::endl;
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  return 0;
}
