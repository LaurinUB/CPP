/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 19:00:32 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/13 11:21:48 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "Span.hpp"

int main(void) {
  std::cout << "Test from subject" << std::endl;
  Span sp = Span(5);

  sp.addNumber(6);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);
  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;

  std::cout << std::endl << "own tests" << std::endl;
  Span test(3);
  std::cout << "try shortestSpan call without elements:" << std::endl;
  try {
    std::cout << test.shortestSpan() << std::endl;
  } catch (std::exception &e) {
    std::cerr << e.what() << std::endl;
  }
  test.addNumber(2);
  std::cout << "try shortestSpan call with one element:" << std::endl;
  try {
    std::cout << test.shortestSpan() << std::endl;
  } catch (std::exception &e) {
    std::cerr << e.what() << std::endl;
  }
  test.addNumber(1);
  std::cout << "try shortestSpan call with two element:" << std::endl;
  try {
    std::cout << test.shortestSpan() << std::endl;
  } catch (std::exception &e) {
    std::cerr << e.what() << std::endl;
  }
  return 0;
}
