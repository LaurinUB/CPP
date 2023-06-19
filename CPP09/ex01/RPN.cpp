/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:55:24 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/19 18:43:38 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN& obj) {
  *this = obj;
}

RPN& RPN::operator=(const RPN& obj) {
  if (this != &obj) {
    *this = obj;
  }
  return *this;
}

bool  RPN::is_number(std::string str) {
  return (str.find_first_not_of("0123456789") == std::string::npos
      && str.size() == 1);
}

bool  RPN::is_operator(std::string str) {
  return (str.find_first_not_of("+-*/") == std::string::npos
      && str.size() == 1);
}

int RPN::to_int(std::string str) {
  std::istringstream iss(str);
  int i;
  iss >> i;
  return i;
}

int RPN::do_op(std::stack<int>* stck, std::string opr) {
  int val = stck->top();
  stck->pop();
  if (stck->empty()) {
    std::cout << "Error" << std::endl;
    return 1;
  }
  if (!opr.compare("+")) {
    val = stck->top() + val;
  } else if (!opr.compare("-")) {
    val = stck->top() - val;
  } else if (!opr.compare("*")) {
    val = stck->top() * val;
  } else if (!opr.compare("/")) {
    val = stck->top() / val;
  }
  stck->pop();
  stck->push(val);
  return 0;
}

void  RPN::rpn(std::string input) {
  std::stack<int> stck;
  std::istringstream ss(input);
  std::string tmp;
  int val;

  while (!ss.eof()) {
    ss >> tmp;
    if (is_number(tmp)) {
      stck.push(to_int(tmp));
    } else if (is_operator(tmp)) {
      if (do_op(&stck, tmp)) {
        return;
      }
      continue;
    } else {
      std::cout << "Error" << std::endl;
      return;
    }
  }
  val = stck.top();
  stck.pop();
  if (!stck.empty()) {
    std::cout << "Error" << std::endl;
    return;
  }
  std::cout << val << std::endl;
  // while (!stck.empty()) {
  //   std::cout << stck.top() << std::endl;
  //   stck.pop();
  // }
}
