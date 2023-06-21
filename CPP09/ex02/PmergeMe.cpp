/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 12:49:05 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/21 15:42:58 by luntiet-         ###   ########.fr       */
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

void  insert_sort(std::vector<int>& tmp, std::vector<int>& vec) {
  std::vector<int>::iterator itmp = tmp.begin();
  std::vector<int>::iterator it = vec.begin();

  while (itmp != tmp.end()) {
    if (*itmp < *it) {
      vec.insert(it, *itmp);
      it = vec.begin();
      itmp++;
    } else {
      it++;
    }
  }
}

void  split_pairs(std::vector<int>& tmp, std::vector<int>& vec) {
  std::vector<int>::iterator it1 = vec.begin();
  std::vector<int>::iterator it2 = vec.begin() + 1;

  while (it2 != vec.end()) {
    if (*it2 <= *it1) {
      tmp.push_back(*it2);
      vec.erase(it2);
    } else {
      tmp.push_back(*it1);
      vec.erase(it1);
    }
    it2 = vec.begin() + 1;
    it1 = vec.begin();
  }
}

void  PmergeMe::sortVec(std::vector<int>& vec) {
  std::vector<int> tmp;
  split_pairs(tmp, vec);
  sort(vec.begin(), vec.end());
  insert_sort(tmp, vec);
}

void  PmergeMe::sortQueue(std::queue<int> que) {
  (void)que;
}
