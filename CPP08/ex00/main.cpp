/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:56:59 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/12 15:22:00 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <list>
#include <iostream>
#include "easyfind.hpp"

int main(void) {
  std::vector<int> test1;
  std::list<int> test2;
  test1.push_back(1);
  test1.push_back(2);
  test1.push_back(3);
  test1.push_back(4);
  test1.push_back(1);
  test2.push_front(1);
  test2.push_front(2);
  test2.push_front(3);
  test2.push_front(4);
  test2.push_front(5);
  std::cout << "Test with Vector:" << std::endl;
  for (size_t i = 0; i < test1.size(); ++i) {
    std::cout << test1[i] << " ";
  }
  std::cout << std::endl << std::endl;
  std::cout << "looking for 2" << std::endl;
  if (2 == easyfind(test1, 2)) {
    std::cout << "Element found in test" << std::endl;
  } else {
    std::cout << "element not found in test" << std::endl;
  }
  std::cout << std::endl << "looking for 8" << std::endl;
  if (8 == easyfind(test1, 8)) {
    std::cout << "Element found in test" << std::endl;
  } else {
    std::cout << "element not found in test" << std::endl;
  }
  std::cout << std::endl;
  std::cout << "Test with List:" << std::endl;
  for (std::list<int>::iterator it = test2.begin(); it != test2.end(); ++it) {
    std::cout << *it  << " ";
  }
  std::cout << std::endl << std::endl;
  std::cout << "looking for 2" << std::endl;
  if (2 == easyfind(test2, 2)) {
    std::cout << "Element found in test" << std::endl;
  } else {
    std::cout << "element not found in test" << std::endl;
  }
  std::cout << std::endl << "looking for 8" << std::endl;
  if (8 == easyfind(test2, 8)) {
    std::cout << "Element found in test" << std::endl;
  } else {
    std::cout << "element not found in test" << std::endl;
  }
  return 0;
}
