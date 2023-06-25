/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 12:49:43 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/25 14:35:44 by luntiet-         ###   ########.fr       */
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
  if (target[m] >= nbr)
    return m;
  else
    return m + 1;
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

template<typename T, typename S>
void  insert_sort(T& tmp, T& con, const S& nbr) {
  if (tmp.size() != con.size()) {
    typename T::iterator last = tmp.begin() + tmp.size() - 2;
    con.push_back(*last);
    tmp.erase(last);
  } else {
    typename T::iterator last = tmp.begin() + tmp.size() - 1;
    con.push_back(*last);
    tmp.erase(last);
  }
  typename T::iterator it = tmp.begin() + nbr[0];
  for (size_t i = 0; i < tmp.size(); ++i) {
    insert_at(it, con);
    it = tmp.begin() + nbr[i];
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
    } else {
      tmp.push_back(*it2);
      con.erase(it2);
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
void  sort_pairs(T& tmp, T& con) {
  typename T::iterator first = con.begin();
  typename T::iterator last = con.end();
  typename T::iterator cr = tmp.begin() + 1;
  typename T::iterator prv = tmp.begin();

  for (typename T::iterator sorted = first; first != last; last = sorted) {
    sorted = first;
    cr = tmp.begin() + 1;
    prv = tmp.begin();
    for (typename T::iterator cur = first, prev = first; ++cur != last; ++prev) {
      if (*cur <= *prev) {
        std::iter_swap(cur, prev);
        if (cr != tmp.end()) {
          std::iter_swap(cr, prv);
        }
        sorted = cur;
      }
      cr++;
      prv++;
    }
  }
}

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

#endif  // PMERGEME_HPP_
