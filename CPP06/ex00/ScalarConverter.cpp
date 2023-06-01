/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 09:42:51 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/01 18:06:11 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
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
  return 4;
}

void  ScalarConverter::convertInt(std::string literal) { (void)literal; }

void  ScalarConverter::convertFloat(std::string literal) { (void)literal; }

void  ScalarConverter::convertDouble(std::string literal) { (void)literal; }

void  ScalarConverter::convertChar(std::string literal) {
  char c = literal.at(0);
  int to_int = static_cast<int>(literal.at(0));
  float to_float = static_cast<float>(literal.at(0));
  double to_double = static_cast<double>(literal.at(0));

  if (c > 31 && c < 128) {
    std::cout << "char: " << literal.at(0) << std::endl;
  }
  std::cout << "int: " << to_int << std::endl;
  std::cout << "float: " << to_float << std::endl;
  std::cout << "double: " << to_double << std::endl;
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
