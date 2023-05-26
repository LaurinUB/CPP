/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:37:45 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/26 14:36:52 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
    : name_("default"), grade_(1) {
  std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade)
  : name_(name), grade_(grade) {
  if (this->grade_ > 150) {
    throw GradeTooLowException();
  } else if (this->grade_ < 1) {
    throw GradeTooHighException();
  }
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

std::ostream& operator<<(std::ostream& o, Bureaucrat &b) {
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
  if (this->grade_ > 150) {
    throw GradeTooLowException();
  } else if (this->grade_ < 1) {
    throw GradeTooHighException();
  }
}

void  Bureaucrat::decrement(void) {
  this->grade_++;
  if (this->grade_ > 150) {
    throw GradeTooLowException();
  } else if (this->grade_ < 1) {
    throw GradeTooHighException();
  }
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw() {
  return "the grade is to high!";
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw() {
  return "the grade is to low!";
}
