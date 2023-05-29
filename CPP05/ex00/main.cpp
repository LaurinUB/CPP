/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:37:55 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/29 07:26:27 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
  std::cout << "Test1:" << std::endl;
  try {
    std::cout << "trying to initiate with Bureaucrat(\"Bob\", 10)"
      << std::endl;
    Bureaucrat bob = Bureaucrat("Bob", 10);
    std::cout << bob;
    std::cout << "calling increment()" << std::endl;
    bob.increment();
    std::cout << bob;
    std::cout << "calling decrement()" << std::endl;
    bob.decrement();
    std::cout << bob;
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << std::endl << "Test2:" << std::endl;
  try {
    std::cout << "trying to initiate with Bureaucrat(\"ToHigh\", 0)"
      << std::endl;
    Bureaucrat toHigh = Bureaucrat("ToHigh", 0);
    std::cout << toHigh << std::endl;
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << std::endl << "Test3:" << std::endl;
  try {
    std::cout << "trying to initiate with Bureaucrat(\"Increment\", 1)"
      << " and increment" << std::endl;
    Bureaucrat toHigh = Bureaucrat("Increment", 1);
    std::cout << toHigh;
    std::cout << "calling increment()" << std::endl;
    toHigh.increment();
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << std::endl << "Test4:" << std::endl;
  try {
    std::cout << "trying to initiate with Bureaucrat(\"Decrement\", 150)"
      << " and decrement" << std::endl;
    Bureaucrat toLow = Bureaucrat("Decrement", 150);
    std::cout << toLow;
    std::cout << "calling decrement()" << std::endl;
    toLow.decrement();
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << std::endl << "Test5:" << std::endl;
  try {
    std::cout << "trying to initiate with Bureaucrat(\"toLow\", 200)"
      << std::endl;
    Bureaucrat toLow = Bureaucrat("ToLow", 200);
    std::cout << toLow << std::endl;
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  return 0;
}
