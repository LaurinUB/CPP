/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 09:42:51 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/02 16:57:05 by luntiet-         ###   ########.fr       */
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

int ScalarConverter::identifyType(const std::string literal) {
  if (literal.size() == 1) {
    return 0;
  } else if (isInt(literal)) {
    return 1;
  } else if (isFloat(literal)) {
    return 2;
  // } else if (isDouble(val)) {
  //   return 3;
  }
  return -1;
}

void  ScalarConverter::convertInt(std::string literal) {
  int val;
  std::istringstream iss(literal);
  iss >> val;
  float to_float = static_cast<float>(val);
  double to_double = static_cast<double>(val);

  printResult(val , val, to_float, to_double);
}

void  ScalarConverter::convertFloat(std::string literal) {
  float f;
  double to_double;
  int to_int;

  literal.pop_back();
  std::istringstream iss(literal);
  iss >> f;
  to_double = static_cast<double>(f);
  to_int = static_cast<long double>(f);

  printResult(to_int, to_int, f, to_double);
}

void  ScalarConverter::convertDouble(std::string literal) { (void)literal; }

void  ScalarConverter::convertChar(std::string literal) {
  int i;
  char c;

  if (isNumber(literal)) {
    int i;
    std::istringstream iss(literal);
    iss >> i;
    c = static_cast<char>(i);
  } else {
    std::istringstream iss(literal);
    (void)i;
    iss >> c;
  }
  int to_int = static_cast<int>(c);
  float to_float = static_cast<float>(c);
  double to_double = static_cast<double>(c);

  printResult(c, to_int, to_float, to_double);
}

void  ScalarConverter::convert(const std::string literal) {
  enum Type {CHAR, INT, FLOAT, DOUBLE};

  int typ = identifyType(literal);
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

void  ScalarConverter::printResult(int c, int i, float f, double d) {
  char cres;
  if (c > 31 && c < 127) {
    cres = static_cast<char>(c);
    std::cout << "char: " << cres << std::endl;
  } else {
    std::cout << "char: " << "not displayable" << std::endl;
  }
  std::cout << "int: " << i << std::endl;
  std::cout << "float: " << f << std::endl;
  std::cout << "double: " << d << std::endl;
}

bool  ScalarConverter::isNumber(const std::string literal) {
  return (literal.find_first_not_of("+-0123456789.f") == std::string::npos);
}

int ScalarConverter::countChar(const std::string literal, char c) {
  int count = 0;

  if (isPseudoLiteral(literal)) {
    return 1;
  }
  if (literal.find('f') != (literal.size() - 1)) {
    return 0;
  }
  for (size_t i = 0; i < literal.size(); ++i) {
    if (literal.at(i) == c) {
      count++;
    }
  }
  return count;
}

bool  ScalarConverter::isFloat(std::string  literal) {
  float f;

  if ((!isNumber(literal) && !isPseudoLiteral(literal))
      || countChar(literal, 'f') != 1
      || countChar(literal, '.') != 1) {
    std::cout << "failed for float check" << std::endl;
    return false;
  }
  literal.pop_back();
  std::istringstream iss(literal);
  iss >> f;
  if (!iss.fail()) {
    return true;
  }
  return false;
}

bool  ScalarConverter::isPseudoLiteral(const std::string literal) {
  return (literal.compare("+inf") == 0
      || literal.compare("-inf") == 0
      || literal.compare("nan") == 0
      || literal.compare("+inff") == 0
      || literal.compare("-inff") == 0
      || literal.compare("nanf") == 0);
}

bool  ScalarConverter::isInt(const std::string literal) {
  long double val;

  if (!isNumber(literal) || isPseudoLiteral(literal)
      || literal.find_first_of(".f") != std::string::npos) {
    return false;
  }
  std::istringstream iss(literal);
  iss >> val;
  return val <= INT_MAX && val >= INT_MIN;
}
