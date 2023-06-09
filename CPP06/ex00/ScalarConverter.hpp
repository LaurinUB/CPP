/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 09:42:55 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/05 11:31:00 by luntiet-         ###   ########.fr       */
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
  static int  identifyType(std::string literal);
  static bool isPseudoLiteral(const std::string literal);
  static bool isNumber(const std::string literal);
  static bool isInt(const std::string literal);
  static bool isChar(const long double val);
  static bool isFloat(const std::string literal);
  static bool isDouble(const std::string literal);
  static int  countChar(const std::string literal, char c);
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
