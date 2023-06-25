/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 12:49:05 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/25 15:47:51 by luntiet-         ###   ########.fr       */
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

std::vector<int>  PmergeMe::jacobsthalNbr(int argc) {
  std::vector<int> res;
  int i = 1;
  int idx = 1;
  int tmp = idx;

  while (idx < argc) {
    tmp = 2 * idx + pow(-1, i);
    if (tmp < argc) {
      res.push_back(tmp - 1);
      tmp--;
      while (tmp > idx) {
        res.push_back(tmp - 1);
        tmp--;
      }
    } else {
      tmp = argc - 1;
      if (tmp > idx) {
        res.push_back(tmp - 1);
      }
      tmp--;
      while (tmp > idx) {
        res.push_back(tmp - 1);
        tmp--;
      }
    }
    idx = 2 * idx + pow(-1 , i);
    i++;
  }
  return res;
}

double  PmergeMe::sortVec(std::vector<int>& vec) {
  std::vector<int> tmp;
  clock_t t;

  t = std::clock();
  if (vec.size() == 1) {
    t = std::clock() - t;
    return (static_cast<double>(t) / CLOCKS_PER_SEC);
  } else if (vec.size() == 2) {
    if (vec[0] > vec[1]) {
      std::iter_swap(vec.begin(), vec.begin() + 1);
    }
    t = std::clock() - t;
    return (static_cast<double>(t) / CLOCKS_PER_SEC);
  }
  split_pairs(tmp, vec);
  sort_pairs(tmp, vec);
  std::vector<int> nbr = jacobsthalNbr(tmp.size());
  insert_sort(tmp, vec, nbr);
  t = std::clock() - t;
  return (static_cast<double>(t) / CLOCKS_PER_SEC);
}

double  PmergeMe::sortDeq(std::deque<int>& deq) {
  std::deque<int> tmp;
  clock_t t;

  t = std::clock();
  if (deq.size() == 1) {
    t = std::clock() - t;
    return (static_cast<double>(t) / CLOCKS_PER_SEC);
  } else if (deq.size() == 2) {
    if (deq[0] > deq[1]) {
      std::iter_swap(deq.begin(), deq.begin() + 1);
    }
    t = std::clock() - t;
    return (static_cast<double>(t) / CLOCKS_PER_SEC);
  }
  split_pairs(tmp, deq);
  sort_pairs(tmp, deq);
  std::vector<int> nbr = jacobsthalNbr(tmp.size());
  insert_sort(tmp, deq, nbr);
  t = std::clock() - t;
  return (static_cast<double>(t) / CLOCKS_PER_SEC);
}
