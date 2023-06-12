/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 19:02:25 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/12 16:56:21 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {
  this->container_.reserve(0);
}

Span::Span(unsigned int N) {
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
  this->container_.push_back(nbr);
}

int Span::getNumber(unsigned int index) {
  return this->container_[index];
}

int Span::shortestSpan() {
  return 0;
}

int Span::longestSpan() {
  return 0;
}
