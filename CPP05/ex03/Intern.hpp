#ifndef INTERN_HPP_
#define INTERN_HPP_

#include <iostream>
#include <string>
#include "AForm.hpp"

class Intern {
 public:
  Intern(void);
  Intern(const Intern &rhs);
  ~Intern(void);
  Intern& operator=(const Intern &rhs);

  Form* makeForm(std::string request, std::string target);
};

#endif  // INTERN_HPP_
