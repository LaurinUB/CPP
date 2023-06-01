/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 09:42:51 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/01 22:31:36 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include <climits>
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void) {}

ScalarConverter::ScalarConverter(const ScalarConverter& rhs) {
  *this = rhs;
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter&  ScalarConverter::operator=(const ScalarConverter& rhs) {
  if (this != &rhs) {
    *this = rhs;
  }
  return *this;
}


int ScalarConverter::identify_type(const std::string literal) {
  if (literal.size() == 1) {
    return 0;
  }

  long double val;
  std::stringstream ss(literal);
  ss >> val;

  if (literal.find('.', 0) == std::string::npos && isInt(val)) {
    return 1;
  // } else {
  //   return floatOrDouble(val);
  }
  return 4;
}

void  ScalarConverter::convertInt(std::string literal) {
  int val;
  std::stringstream ss(literal);
  ss >> val;

  float to_float = static_cast<float>(val);
  double to_double = static_cast<double>(val);
  print_result(val , val, to_float, to_double);
}

void  ScalarConverter::convertFloat(std::string literal) { (void)literal; }

void  ScalarConverter::convertDouble(std::string literal) { (void)literal; }

void  ScalarConverter::convertChar(std::string literal) {
  char c = literal.at(0);
  int to_int = static_cast<int>(c);
  float to_float = static_cast<float>(c);
  double to_double = static_cast<double>(c);
  print_result(c, to_int, to_float, to_double);
}

void  ScalarConverter::convert(const std::string literal) {
  enum Type {CHAR, INT, FLOAT, DOUBLE};

  int typ = identify_type(literal);
  switch (typ) {
    case CHAR:
      convertChar(literal);
      break;
    case INT:
      convertInt(literal);
      break;
    case FLOAT:
      convertFloat(literal);
      break;
    case DOUBLE:
      convertDouble(literal);
      break;

    default:
      std::cout << "not convertable" << std::endl;
  }
}

void  ScalarConverter::print_result(char c, int i, float f, double d) {
  if (c > 31 && c < 127) {
    c = static_cast<char>(c);
    std::cout << "char: " << c << std::endl;
  } else {
    std::cout << "char: " << "not displayable" << std::endl;
  }
  std::cout << "int: " << i << std::endl;
  std::cout << "float: " << f << std::endl;
  std::cout << "double: " << d << std::endl;
}

bool  ScalarConverter::isInt(long double val) {
  return val <= INT_MAX && val >= INT_MIN;
}
