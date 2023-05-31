/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 08:27:13 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/31 15:38:53 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(void)
    : name_("default"),
      signed_(false),
      sign_req_grade_(1),
      execute_req_grade_(1) {}

AForm::AForm(const std::string name, unsigned int sign_req, unsigned int exe_req)
    : name_(name),
      sign_req_grade_(sign_req),
      execute_req_grade_(exe_req) {
  this->signed_ = false;
  if (sign_req > 150 || exe_req > 150) {
    throw AForm::GradeTooLowException();
  } else if (sign_req < 1 || exe_req < 1) {
    throw AForm::GradeTooHighException();
  }
}

AForm::AForm(const AForm& rhs)
    : name_(rhs.getName()),
      signed_(rhs.getSigned()),
      sign_req_grade_(rhs.getSignRequiredGrade()),
      execute_req_grade_(rhs.getExecuteRequiredGrade()) {
  *this = rhs;
}

AForm::~AForm() {}

AForm&  AForm::operator=(const AForm& rhs) {
  if (this != &rhs) {
    *this = rhs;
  }
  return *this;
}

void  AForm::beSigned(const Bureaucrat& b) {
  if (this->getSignRequiredGrade() < b.getGrade()) {
    throw AForm::GradeTooLowException();
  } else {
    this->signed_ = true;
  }
}

void  AForm::setSign(const bool t) {
  this->signed_ = t;
}

std::string AForm::getName(void) const {
  return this->name_;
}

bool AForm::getSigned(void) const {
  return this->signed_;
}

unsigned int AForm::getSignRequiredGrade(void) const {
  return this->sign_req_grade_;
}

unsigned int AForm::getExecuteRequiredGrade(void) const {
  return this->execute_req_grade_;
}

const char* AForm::GradeTooLowException::what(void) const throw() {
  return "The grade is to Low!";
}

const char* AForm::GradeTooHighException::what(void) const throw() {
  return "The grade is to High!";
}

std::ostream& operator<<(std::ostream& o, AForm& f) {
  o << "Form: " << f.getName() << std::endl << "signed: " << f.getSigned()
    << std::endl << "sign required grade: " << f.getSignRequiredGrade()
    << std::endl
    << "execution required grade: " << f.getExecuteRequiredGrade() << std::endl;
  return o;
}
