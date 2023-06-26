/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 12:49:43 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/26 09:46:03 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP_
#define PMERGEME_HPP_

#include <iostream>
#include <iomanip>
#include <sstream>
#include <deque>
#include <vector>
#include <string>
#include <algorithm>
#include <ctime>
#include <cmath>
#include <utility>

class PmergeMe {
 public:
  static std::vector< std::pair<int, int> > split_pairs_vec(const std::vector<int>& vec);
  static double sortVec(std::vector<int>& vec);
  static std::deque< std::pair<int, int> > split_pairs_deq(const std::deque<int>& deq);
  static double sortDeq(std::deque<int>& deq);
  static int validate_number(std::string val);
  static std::vector<int> jacobsthalNbr(int argc);

 private:
  PmergeMe();
  ~PmergeMe();
  PmergeMe(const PmergeMe& obj);
  PmergeMe& operator=(const PmergeMe& obj);
};

template<typename T>
bool  is_sorted(const T& container) {
  for (size_t i = 0; i < container.size() - 1; ++i) {
    if (container[i] > container[i + 1]) {
      return false;
    }
  }
  return true;
}

template<typename T>
void  print(const T& container) {
  typename T::const_iterator it = container.begin();

  if (container.size() > 100) {
    for (int i = 0; i < 100; ++i) {
      std::cout << *it << " ";
      it++;
    }
    std::cout << " [ ... ]";
  } else {
    while (it != container.end()) {
      std::cout << *it << " ";
      it++;
    }
  }
  std::cout << std::endl;
}

template<typename T>
int binary_search(int nbr, const T& target) {
  int l = 0;
  int m = 0;
  int r = target.size() - 1;

  while (l <= r) {
    m = (l + r) / 2;
    if (target[m] < nbr) {
      l = m + 1;
    } else if (target[m] > nbr) {
      r = m - 1;
    } else {
      return m;
    }
  }
  if (target[m] >= nbr) {
    return m;
  } else {
    return m + 1;
  }
}

template<typename T>
void  insert_at(typename T::iterator it, T& con) {
  int t = binary_search(*it, con);
  if (t == 0 && *it > con[t]) {
    std::cout << "Error: could not find spot to insert." << std::endl;
    return;
  } else {
    con.insert(con.begin() + t, *it);
  }
}

template<typename T>
T merge(const T& left, const T& right) {
  T res;
  size_t  indexL = 0;
  size_t  indexR = 0;

  while (indexL < left.size() && indexR < right.size()) {
    if (left[indexL].first < right[indexR].first) {
      res.push_back(left[indexL]);
      indexL++;
    } else {
      res.push_back(right[indexR]);
      indexR++;
    }
  }
  while (indexL < left.size()) {
      res.push_back(left[indexL]);
      indexL++;
  }
  while (indexR < right.size()) {
      res.push_back(right[indexR]);
      indexR++;
  }
  return res;
}

template<typename P, typename T>
T sort_one(const P& pairs, T con, int unp) {
  if (pairs[0].first > pairs[0].second) {
    con.push_back(pairs[0].second);
    con.push_back(pairs[0].first);
  } else {
    con.push_back(pairs[0].first);
    con.push_back(pairs[0].second);
  }
  if (unp != -1) {
    con.insert(con.begin() + binary_search(unp, con), unp);
  }
  return con;
}

template<typename P, typename T>
T insert_sort(P pairs, T con, int unp) {
  con.clear();
  typename P::iterator it = pairs.begin();
  std::vector<int> nbr = PmergeMe::jacobsthalNbr(pairs.size());

  if (pairs.size() == 1) {
    return sort_one(pairs, con, unp);
  }
  con.push_back(it->second);
  for (size_t i = 0; i < pairs.size(); ++i) {
    con.push_back(it[i].first);
  }
  pairs.erase(it);
  it = pairs.begin() + nbr[0];
  for (size_t i = 0; i < nbr.size(); ++i) {
    int t = binary_search(it->second, con);
    if (t == 0 && it->second > con[t]) {
      std::cout << "Error: could not find spot to insert." << std::endl;
      exit(EXIT_FAILURE);
    } else {
      con.insert(con.begin() + t, it->second);
    }
    it = pairs.begin() + nbr[i];
  }
  if (unp != -1) {
    con.insert(con.begin() + binary_search(unp, con), unp);
  }
  return con;
}

template<typename T>
T sort_pairs(T con) {
  if (con.size() == 1) {
    return con;
  } else if (con.size() == 2) {
    if (con[0].first > con[1].first) {
      iter_swap(con.begin(), con.begin() + 1);
    }
    return con;
  }

  size_t mid = con.size() / 2;
  T left;
  T right;

  for (size_t i = 0; i < mid; ++i) {
    left.push_back(con[i]);
  }
  for (size_t i = mid; i < con.size(); ++i) {
    right.push_back(con[i]);
  }
  T sortedRight = sort_pairs(right);
  T sortedLeft = sort_pairs(left);

  return merge(sortedRight, sortedLeft);
}

#endif  // PMERGEME_HPP_
