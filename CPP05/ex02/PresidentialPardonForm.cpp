/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:59:49 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/30 17:58:05 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
    : Form("default", 25, 5) {
  this->signed_ = false;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string name)
    : Form(name, 25, 5) {
  this->signed_ = false;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& rhs)
    : Form(rhs) {
  *this = rhs;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs) {
  if (this != &rhs) {
    *this = rhs;
  }
  return *this;
}

void  PresidentialPardonForm::execute(const Bureaucrat& executer) const {
  if (this->getExecuteRequiredGrade() < executer.getGrade()) {
    throw GradeTooLowException();
  } else {
    std::cout << executer.getName() << " has been pardoned by Zaphod Beeblebrox"
      << std::endl;
  }
}
