/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 12:49:05 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/23 17:40:55 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& obj) {
  *this = obj;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& obj) {
  if (this != &obj) {
    *this = obj;
  }
  return *this;
}

int PmergeMe::validate_number(std::string val) {
  std::istringstream iss(val);
  int i;

  if (!(val.find_first_not_of("0123456789+") == std::string::npos)) {
    std::cout << "Error: non numeric or negative input." << std::endl;
    return -1;
  }
  iss >> i;
  if (iss.eof() && !iss.fail()) {
    return i;
  }
  std::cout << "Error: input to big." << std::endl;
  return -1;
}

double  PmergeMe::sortVec(std::vector<int>& vec) {
  std::vector<int> tmp;
  clock_t t;

  t = std::clock();
  split_pairs(tmp, vec);
  sort_pairs(tmp, vec);
  insert_sort(tmp, vec);
  t = std::clock() - t;
  return (static_cast<double>(t) / CLOCKS_PER_SEC);
}

double  PmergeMe::sortDeq(std::deque<int>& deq) {
  std::deque<int> tmp;
  clock_t t;

  t = std::clock();
  split_pairs(tmp, deq);
  sort_pairs(tmp, deq);
  insert_sort(tmp, deq);
  t = std::clock() - t;
  return (static_cast<double>(t) / CLOCKS_PER_SEC);
}
