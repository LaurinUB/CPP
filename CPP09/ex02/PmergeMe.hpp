/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 12:49:43 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/23 09:10:57 by luntiet-         ###   ########.fr       */
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

template<typename T>
void  insert_sort(T& tmp, T& con) {
  typename T::iterator itmp = tmp.begin();
  typename T::iterator it = con.begin();

  while (itmp != tmp.end()) {
    if (*itmp < *it) {
      con.insert(it, *itmp);
      it = con.begin();
      itmp++;
    } else {
      it++;
    }
  }
}

template<typename T>
void  split_pairs(T& tmp, T& con) {
  typename T::iterator it1 = con.begin();
  typename T::iterator it2 = con.begin() + 1;

  while (it2 != con.end()) {
    if (*it2 <= *it1) {
      tmp.push_back(*it2);
      con.erase(it2);
    } else {
      tmp.push_back(*it1);
      con.erase(it1);
    }
    it2 = con.begin() + 1;
    it1 = con.begin();
  }
}

template<typename T>
void  print(const T container) {
  typename T::const_iterator it = container.begin();

  if (container.size() > 100) {
    for (int i = 0; i < 100; ++i) {
      std::cout << *it << " ";
      it++;
    }
    std::cout << " [...]";
  } else {
    while (it != container.end()) {
      std::cout << *it << " ";
      it++;
    }
  }
  std::cout << std::endl;
}

class PmergeMe {
 public:
  static double sortVec(std::vector<int>& vec);
  static double sortDeq(std::deque<int>& deq);
  static int validate_number(std::string val);

 private:
  PmergeMe();
  ~PmergeMe();
  PmergeMe(const PmergeMe& obj);
  PmergeMe& operator=(const PmergeMe& obj);
};

#endif  // PMERGEME_HPP_
