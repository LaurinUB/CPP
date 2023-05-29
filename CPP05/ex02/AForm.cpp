/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 08:27:13 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/29 08:27:14 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

Form::Form(void)
    : name_("default"),
      signed_(false),
      sign_req_grade_(1),
      execute_req_grade_(1) {}

Form::Form(const std::string name, unsigned int sign_req, unsigned int exe_req)
    : name_(name),
      sign_req_grade_(sign_req),
      execute_req_grade_(exe_req) {
  this->signed_ = false;
  if (sign_req > 150 || exe_req > 150) {
    throw Form::GradeTooLowException();
  } else if (sign_req < 1 || exe_req < 1) {
    throw Form::GradeTooHighException();
  }
}

Form::Form(const Form& rhs)
    : name_(rhs.getName()),
      signed_(rhs.getSigned()),
      sign_req_grade_(rhs.getSignRequiredGrade()),
      execute_req_grade_(rhs.getExecuteRequiredGrade()) {
  *this = rhs;
}

Form::~Form() {}

Form&  Form::operator=(const Form& rhs) {
  if (this != &rhs) {
    *this = rhs;
  }
  return *this;
}

void  Form::beSigned(const Bureaucrat& b) {
  if (this->getSignRequiredGrade() > 150) {
    throw Form::GradeTooLowException();
  } else if (this->getSignRequiredGrade() < 1) {
    throw Form::GradeTooHighException();
  } else {
    if (b.signForm(*this)) {
      this->signed_ = true;
    }
  }
}

std::string Form::getName(void) const {
  return this->name_;
}

bool Form::getSigned(void) const {
  return this->signed_;
}

unsigned int Form::getSignRequiredGrade(void) const {
  return this->sign_req_grade_;
}

unsigned int Form::getExecuteRequiredGrade(void) const {
  return this->execute_req_grade_;
}

const char* Form::GradeTooLowException::what(void) const throw() {
  return "The grade is to Low!";
}

const char* Form::GradeTooHighException::what(void) const throw() {
  return "The grade is to High!";
}

std::ostream& operator<<(std::ostream& o, Form& f) {
  o << "Form: " << f.getName() << std::endl << "signed: " << f.getSigned()
    << std::endl << "sign required grade: " << f.getSignRequiredGrade()
    << std::endl
    << "execution required grade: " << f.getExecuteRequiredGrade() << std::endl;
  return o;
}
