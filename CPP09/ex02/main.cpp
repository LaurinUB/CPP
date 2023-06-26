/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:28:30 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/26 09:32:14 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char *argv[]) {
  std::vector<int> vec;
  std::deque<int> deq;
  int tmp;

  if (argc < 2) {
    std::cout << "Error: no arguments." << std::endl;
    return EXIT_FAILURE;
  }
  for (int i = 1; i < argc; ++i) {
    tmp = PmergeMe::validate_number(argv[i]);
    if (tmp >= 0) {
      vec.push_back(tmp);
      deq.push_back(tmp);
    } else {
      return EXIT_FAILURE;
    }
  }
  std::cout << "Before: ";
  print(vec);
  double sortTimeVec = PmergeMe::sortVec(vec);
  double sortTimeDeq = PmergeMe::sortDeq(deq);
  if (!is_sorted(vec) || !is_sorted(deq)) {
    std::cout << "Error: failed to sort." << std::endl;
    if (!is_sorted(deq)) {
      std::cout << "on deq" << std::endl;
      print(deq);
    } else {
      std::cout << "on vec" << std::endl;
      print(vec);
    }
    return EXIT_FAILURE;
  }
  std::cout << std::endl << "After: ";
  print(vec);
  // std::cout << "Deq: ";
  // print(deq);
  std::cout << std::endl << "Time to process a range of " << vec.size()
    << " elements with std::vector : "
    << std::fixed << std::showpoint
    << sortTimeVec << " seconds" << std::endl;
  std::cout << "Time to process a range of " << deq.size()
    << " elements with std::deque : "
    << std::fixed << std::showpoint
    << sortTimeDeq << " seconds" << std::endl;
  return EXIT_SUCCESS;
}
