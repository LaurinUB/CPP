#ifndef PRESIDENTIALPARDONFORM_HPP_
#define PRESIDENTIALPARDONFORM_HPP_

#include <iostream>
#include <string>
#include "AForm.hpp"

class PresidentialPardonForm : public Form {
 public:
  PresidentialPardonForm(void);
  PresidentialPardonForm(const PresidentialPardonForm &rhs);
  ~PresidentialPardonForm(void);
  PresidentialPardonForm& operator=(const PresidentialPardonForm &rhs);
};

#endif  // PRESIDENTIALPARDONFORM_HPP_
