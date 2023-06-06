/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 09:42:51 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/06 11:00:52 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include <limits>
#include "ScalarConverter.hpp"

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
      std::cout << "\"" << literal <<  "\" not convertable" << std::endl;
  }
}

int ScalarConverter::identifyType(const std::string literal) {
  if (literal.size() == 1) {
    return 0;
  } else if (isInt(literal)) {
    return 1;
  } else if (isFloat(literal)) {
    return 2;
  } else if (isDouble(literal)) {
    return 3;
  }
  return -1;
}

void  ScalarConverter::convertChar(std::string literal) {
  std::cout << "Converted from Char" << std::endl;
  char c = literal.at(0);

  int to_int = static_cast<int>(c);
  float to_float = static_cast<float>(c);
  double to_double = static_cast<double>(c);

  if (c > 31 && c < 127) {
    std::cout << "char: '" << c << "'" << std::endl;
  } else {
    std::cout << "char: Non displayable" << std::endl;
  }
  std::cout << "int: " << to_int << std::endl;
  std::cout << std::showpoint << "float: " << to_float
    << "f" << std::endl;
  std::cout << "double: " << to_double << std::endl;
}

void  ScalarConverter::convertInt(std::string literal) {
  std::cout << "Converted from Int" << std::endl;
  int val;
  char to_char;
  std::istringstream iss(literal);
  iss >> val;

  float to_float = static_cast<float>(val);
  double to_double = static_cast<double>(val);

  if (isChar(val)) {
    to_char = static_cast<char>(val);
    std::cout << "char: '" << to_char << "'" << std::endl;
  } else {
    to_char = 0;
    std::cout << "char: Non displayable" << std::endl;
  }
  std::cout << "int: " << val << std::endl;
  std::cout.precision(1);
  std::cout << std::showpoint << std::fixed << "float: " << to_float
    << "f" << std::endl;
  std::cout << "double: " << to_double << std::endl;
}

void  ScalarConverter::convertFloat(std::string literal) {
  std::cout << "Converted from Float" << std::endl;
  float f;
  char to_char;

  literal.erase(literal.size() - 1, 1);
  std::istringstream iss(literal);
  iss >> f;
  double to_double = static_cast<double>(f);
  int to_int = static_cast<long double>(f);

  if (isChar(f)) {
    to_char = static_cast<char>(f);
    std::cout << "char: '" << to_char << "'" << std::endl;
  } else if (!isPseudoLiteral(literal)) {
    std::cout << "char: Non displayable" << std::endl;
  } else {
    std::cout << "char: impossible" << std::endl;
  }

  if (!isPseudoLiteral(literal)
      && to_double <= std::numeric_limits<int>::max()
      && to_double >= std::numeric_limits<int>::min()) {
    std::cout << "int: " << to_int << std::endl;
  } else {
    std::cout << "int: impossible" << std::endl;
  }

  std::cout.precision(1);
  std::cout << std::showpoint << std::fixed << "float: " << f
    << "f" << std::endl;
  std::cout << "double: " << to_double << std::endl;
}

void  ScalarConverter::convertDouble(std::string literal) {
  std::cout << "Converted from Double" << std::endl;
  double d;
  char  to_char;

  std::istringstream iss(literal);
  iss >> d;

  int to_int = static_cast<int>(d);
  float to_float = static_cast<float>(d);

  if (isChar(d)) {
    to_char = static_cast<char>(d);
    std::cout << "char: '" << to_char << "'" << std::endl;
  } else if (!isPseudoLiteral(literal)) {
    to_char = 0;
    std::cout << "char: Non displayable" << std::endl;
  } else {
    std::cout << "char: impossible" << std::endl;
  }

  if (!isPseudoLiteral(literal)
      && d <= std::numeric_limits<int>::max()
      && d >= std::numeric_limits<int>::min()) {
    std::cout << "int: " << to_int << std::endl;
  } else {
    std::cout << "int: impossible" << std::endl;
  }
  std::cout.precision(1);
  std::cout << std::showpoint << std::fixed << "float: " << to_float
    << "f" << std::endl;
  std::cout << "double: " << d << std::endl;
}

int ScalarConverter::countChar(const std::string literal, char c) {
  int count = 0;

  if (isPseudoLiteral(literal)) {
    return 1;
  }
  for (size_t i = 0; i < literal.size(); ++i) {
    if (literal.at(i) == c) {
      count++;
    }
  }
  return count;
}

bool  ScalarConverter::isNumber(const std::string literal) {
  return (literal.find_first_not_of("+-0123456789.f") == std::string::npos);
}

bool ScalarConverter::isDouble(std::string literal) {
  double d;

  if ((!isNumber(literal) && !isPseudoLiteral(literal))
      || countChar(literal, '.') != 1) {
    return false;
  }
  std::istringstream iss(literal);
  iss >> d;
  if (!iss.fail() && iss.eof()) {
    return true;
  }
  return false;
}

bool  ScalarConverter::isFloat(std::string literal) {
  float f;

  if ((!isNumber(literal) && !isPseudoLiteral(literal))
      || countChar(literal, 'f') != 1
      || countChar(literal, '.') != 1) {
    return false;
  }
  if (countChar(literal, 'f') == 2 && isPseudoLiteral(literal)) {
    return true;
  }
  literal.erase(literal.size() - 1, 1);
  if (literal.find('.') == literal.size() - 1) {
    return false;
  }
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
  return val <= std::numeric_limits<int>::max()
    && val >= std::numeric_limits<int>::min();
}

bool  ScalarConverter::isChar(const long double val) {
  return (val > 31 && val < 127);
}

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
