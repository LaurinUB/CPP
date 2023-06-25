/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 12:49:43 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/25 19:56:43 by luntiet-         ###   ########.fr       */
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
#include <utility>

class PmergeMe {
 public:
  static double sortVec(std::vector<int>& vec);
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
      std::cout << "compare" << std::endl;
    } else if (target[m] > nbr) {
      r = m - 1;
      std::cout << "compare" << std::endl;
    } else {
      return m;
    }
  }
  if (target[m] >= nbr) {
    std::cout << "compare" << std::endl;
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
void  split_pairs(T& tmp, T& con) {
  typename T::iterator it1 = con.begin();
  typename T::iterator it2 = con.begin() + 1;

  while (it1 != con.end() && it2 != con.end()) {
    if (*it2 <= *it1) {
      tmp.push_back(*it1);
      con.erase(it1);
      std::cout << "compare" << std::endl;
    } else {
      tmp.push_back(*it2);
      con.erase(it2);
      std::cout << "compare" << std::endl;
    }
    it2 = con.begin() + tmp.size() + 1;
    it1 = con.begin() + tmp.size();
  }
  if (con.size() != tmp.size()) {
    tmp.push_back(*(con.begin() + con.size() - 1));
    con.pop_back();
  }
}

template<typename T>
T merge(const T& left, const T& right) {
  T res;
  size_t  indexL = 0;
  size_t  indexR = 0;

  while (indexL < left.size() && indexR < right.size()) {
    std::cout << "compare" << std::endl;
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
    std::cout << "compare" << std::endl;
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
