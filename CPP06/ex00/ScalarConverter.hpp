/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 09:42:55 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/01 22:23:06 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP_
#define SCALARCONVERTER_HPP_

#include <iostream>
#include <string>

class ScalarConverter {
 public:
  static  void convert(std::string literal);

 private:
  static void print_result(char c, int i, float f, double d);
  static int  identify_type(std::string literal);
  static bool isInt(long double val);
  static void convertChar(std::string literal);
  static void convertInt(std::string literal);
  static void convertFloat(std::string literal);
  static void convertDouble(std::string literal);
  ScalarConverter(void);
  ScalarConverter(const ScalarConverter &rhs);
  ~ScalarConverter(void);
  ScalarConverter& operator=(const ScalarConverter &rhs);
};

#endif  // SCALARCONVERTER_HPP_
