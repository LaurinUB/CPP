/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:55:26 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/19 17:50:31 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP_
#define RPN_HPP_

#include <iostream>
#include <sstream>
#include <string>
#include <stack>

class RPN {
 public:
  static void rpn(std::string input);
  static bool is_number(std::string str);
  static bool is_operator(std::string str);
  static int to_int(std::string str);

 private:
  RPN();
  ~RPN();
  RPN(const RPN& obj);
  RPN& operator=(const RPN& obj);
};

#endif  // RPN_HPP_
