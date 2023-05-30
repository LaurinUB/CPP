#include "PresidentialPardonForm.hpp"

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
