#include "RobotomyRequestForm.hpp"

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
