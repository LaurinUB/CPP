/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 19:02:25 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/13 11:18:50 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include "Span.hpp"

Span::Span() : size_(0) {
  this->container_.reserve(0);
}

Span::Span(unsigned int N) : size_(N) {
  this->container_.reserve(N);
}

Span::~Span() {}

Span::Span(const Span& obj) {
*this = obj;
}

Span& Span::operator=(const Span& obj) {
  if (this != &obj) {
    *this = obj;
  }
  return *this;
}

void  Span::addNumber(int nbr) {
  if (this->container_.size() < this->size_) {
    this->container_.push_back(nbr);
  } else {
    std::cerr << "Cannot add number, span ist full." << std::endl;
  }
}

int Span::getNumber(unsigned int index) {
  if (index >= this->size_) {
    std::cerr << "inde out of range" << std::endl;
    return 0;
  }
  return this->container_[index];
}

int Span::getSize() {
  return this->size_;
}

int Span::shortestSpan() {
  if (this->container_.empty()) {
    throw Span::EmptyException();
  } else if (this->container_.size() < 2) {
    throw Span::OnlyOneElementException();
  }
  std::sort(this->container_.begin(), this->container_.end());
  int span = this->container_[1] - this->container_[0];
  for (size_t i = 2; i < this->container_.size(); ++i) {
    if (this->container_[i] - this->container_[i - 1] < span) {
      span = this->container_[i] - this->container_[i - 1];
    }
  }
  return span;
}

int Span::longestSpan() {
  if (this->container_.empty()) {
    throw Span::EmptyException();
  } else if (this->container_.size() < 2) {
    throw Span::OnlyOneElementException();
  }
  std::sort(this->container_.begin(), this->container_.end());
  return (this->container_[this->container_.size() - 1] - this->container_[0]);
}

const char* Span::EmptyException::what() const throw() {
  return "Span is empty.";
}

const char* Span::OnlyOneElementException::what() const throw() {
  return "Span has only one Element.";
}

std::ostream& operator << (std::ostream& o, Span& s) {
  for (int i = 0; i < s.getSize(); ++i) {
    o << s.getNumber(i) << " ";
  }
  return o;
}
