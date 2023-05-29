#ifndef ROBOTOMYREQUESTFORM_HPP_
#define ROBOTOMYREQUESTFORM_HPP_

#include <iostream>
#include <string>
#include "AForm.hpp"

class RobotomyRequestForm : public Form {
 public:
  RobotomyRequestForm(void);
  RobotomyRequestForm(const RobotomyRequestForm &rhs);
  ~RobotomyRequestForm(void);
  RobotomyRequestForm& operator=(const RobotomyRequestForm &rhs);
};

#endif  // ROBOTOMYREQUESTFORM_HPP_
