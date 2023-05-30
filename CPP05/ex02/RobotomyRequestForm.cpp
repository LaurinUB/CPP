/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:59:57 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/30 18:22:41 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <cstdlib>
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
    : Form("default", 72, 45) {
  this->signed_ = false;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string name)
    : Form(name, 72, 45) {
  this->signed_ = false;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& rhs)
    : Form(rhs) {
  *this = rhs;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm&  RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs) {
  if (this != &rhs) {
    *this = rhs;
  }
  return *this;
}

void  RobotomyRequestForm::execute(const Bureaucrat& executer) const {
  if (this->getExecuteRequiredGrade() < executer.getGrade()) {
    throw GradeTooLowException();
  } else {
    std::srand(std::time(NULL));
    int random = std::rand() % 2;
    std::cout << random << std::endl;
    if (random == 1) {
      std::cout << "* some drilling noises *" << std::endl;
      std::cout << executer.getName() << " has been robotomised" << std::endl;
    } else {
      std::cout << "* some drilling noises *" << std::endl;
      std::cout << "process failed!" << std::endl;
    }
  }
}
