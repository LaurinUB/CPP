/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:37:45 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/26 13:00:36 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
    : name_("default"), grade_(1) {
  std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade)
  : name_(name) {
    
  }

Bureaucrat::Bureaucrat(const Bureaucrat& rhs) {
  *this = rhs;
}

Bureaucrat::~Bureaucrat() {
  std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat&  Bureaucrat::operator=(const Bureaucrat& rhs) {
  if (this != &rhs) {
    *this = rhs;
  }
  return *this;
}

std::ostream& operator<<(std::ostream& o, Bureaucrat b) {
  o << "Bureaucrat: " << b.getName() << " has the grade: "
    << b.getGrade() << std::endl;
  return o;
}

const std::string Bureaucrat::getName(void) const {
  return this->name_;
}

unsigned int Bureaucrat::getGrade(void) const {
  return this->grade_;
}

void  Bureaucrat::increment(void) {
  this->grade_--;
}

void  Bureaucrat::decrement(void) {
  this->grade_++;
}
