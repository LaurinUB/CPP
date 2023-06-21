/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:28:30 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/21 11:01:38 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char *argv[]) {
  std::vector<int> vec;
  std::queue<int> queue;
  std::vector<int>::iterator it;
  int tmp;

  if (argc <= 1) {
    std::cout << "Error: no arguments." << std::endl;
  }
  for (int i = 1; i < argc; ++i) {
    tmp = PmergeMe::validate_number(argv[i]);
    if (tmp >= 0) {
      vec.push_back(tmp);
      queue.push(tmp);
    } else {
      return EXIT_FAILURE;
    }
  }
  it = vec.begin();
  std::cout << "Before: ";
  while (it != vec.end()) {
    std::cout << *it << " ";
    it++;
  }
  PmergeMe::sortVec(vec);
  PmergeMe::sortQueue(queue);
  return EXIT_SUCCESS;
}
