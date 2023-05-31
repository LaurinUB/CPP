#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern(void) {}

Intern::Intern(const Intern& rhs) {
  *this = rhs;
}

Intern::~Intern() {}

Intern&  Intern::operator=(const Intern& rhs) {
  if (this != &rhs) {
    *this = rhs;
  }
  return *this;
}

AForm* Intern::makeForm(std::string request, std::string target) {
  enum Case {scf, rrf, ppf};
  std::string names[3] = {"shrubbery creation",
    "robotomy request", "presidential pardon"};
  int i = 0;

  while (names[i].compare(request)) {
    i++;
  }
  switch (i) {
    case scf:
      std::cout << "Interen creates ShrubberyCreationForm targeted on "
        << target << std::endl;
      return new ShrubberyCreationForm(target);
    case rrf:
      std::cout << "Interen creates RobotomyRequestForm targeted on "
        << target << std::endl;
      return new RobotomyRequestForm(target);
    case ppf:
      std::cout << "Interen creates PresidentialPardonForm targeted on "
        << target << std::endl;
      return new PresidentialPardonForm(target);
  }
  std::cout << "Intern did not found any Form for " << request << std::endl;
  return NULL;
}
