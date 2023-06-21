/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 12:49:43 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/21 10:36:53 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP_
#define PMERGEME_HPP_

#include <iostream>
#include <sstream>
#include <queue>
#include <vector>
#include <string>

class PmergeMe {
 public:
  static void sortVec(std::vector<int> vec);
  static void sortQueue(std::queue<int> que);
  static int validate_number(std::string val);

 private:
  PmergeMe();
  ~PmergeMe();
  PmergeMe(const PmergeMe& obj);
  PmergeMe& operator=(const PmergeMe& obj);
};

#endif  // PMERGEME_HPP_
