/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 12:49:05 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/21 11:26:38 by luntiet-         ###   ########.fr       */
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

int greater_element(std::vector<int> vec, std::vector<int> tmp, int i) {
  if (vec[i] > vec[i - 1]) {
    tmp.push_back(vec[i]);
  }
  return vec[i - 1];
}

void  PmergeMe::sortVec(std::vector<int> vec) {
  std::vector<int> tmp;

  for (size_t i = 0; i < vec.size(); ++i) {
    if ((i + 1) % 2 == 0) {
      greater_element(vec, tmp, i);
    }
  }
}

void  PmergeMe::sortQueue(std::queue<int> que) {
  (void)que;
}
