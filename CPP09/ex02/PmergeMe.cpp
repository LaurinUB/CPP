/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 12:49:05 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/26 09:45:25 by luntiet-         ###   ########.fr       */
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

std::vector< std::pair<int, int> > PmergeMe::split_pairs_vec(const std::vector<int>& vec) {
  std::vector< std::pair<int, int> > res;

  if (vec.size() == 2) {
    res.push_back(std::make_pair(vec[0], vec[1]));
    return res;
  }
  for (size_t i = 0; i < vec.size(); ++i) {
    if (i + 1 < vec.size()) {
      if (vec[i] > vec[i + 1]) {
        res.push_back(std::make_pair(vec[i], vec[i + 1]));
        i++;
      } else {
        res.push_back(std::make_pair(vec[i + 1], vec[i]));
        i++;
      }
    } else {
      std::cout << "Error: Failed to split pairs." << std::endl;
      exit(EXIT_FAILURE);
    }
  }
  return res;
}

double  PmergeMe::sortVec(std::vector<int>& vec) {
  int unpaired = -1;
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
  if (vec.size() % 2 != 0) {
    unpaired = vec.back();
    vec.pop_back();
  }
  std::vector< std::pair<int, int> > pairs = split_pairs_vec(vec);
  pairs = sort_pairs(pairs);
  vec = insert_sort(pairs, vec, unpaired);
  t = std::clock() - t;
  return (static_cast<double>(t) / CLOCKS_PER_SEC);
}

std::deque< std::pair<int, int> > PmergeMe::split_pairs_deq(const std::deque<int>& deq) {
  std::deque< std::pair<int, int> > res;

  if (deq.size() == 2) {
    res.push_back(std::make_pair(deq[0], deq[1]));
    return res;
  }
  for (size_t i = 0; i < deq.size(); ++i) {
    if (i + 1 < deq.size()) {
      if (deq[i] > deq[i + 1]) {
        res.push_back(std::make_pair(deq[i], deq[i + 1]));
        i++;
      } else {
        res.push_back(std::make_pair(deq[i + 1], deq[i]));
        i++;
      }
    } else {
      std::cout << "Error: Failed to split pairs." << std::endl;
      exit(EXIT_FAILURE);
    }
  }
  return res;
}

double  PmergeMe::sortDeq(std::deque<int>& deq) {
  int unpaired = -1;
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
  if (deq.size() % 2 != 0) {
    unpaired = deq.back();
    deq.pop_back();
  }
  std::deque< std::pair<int, int> > pairs = split_pairs_deq(deq);
  pairs = sort_pairs(pairs);
  deq = insert_sort(pairs, deq, unpaired);
  t = std::clock() - t;
  return (static_cast<double>(t) / CLOCKS_PER_SEC);
}
