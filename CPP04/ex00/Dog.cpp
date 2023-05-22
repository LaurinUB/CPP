#include "Dog.hpp"

Dog::Dog(void) {
  this->type_ = "Dog";
}

Dog::Dog(const Dog& rhs) {
  *this = rhs;
}

Dog::~Dog() {}

Dog&  Dog::operator=(const Dog& rhs) {
  this->type_ = rhs.type_;
  return *this;
}

void  Dog::makeSound(void) const {
  std::cout << "calling Dog::makeSound()" << std::endl;
  std::cout << "Wuff" << std::endl << std::endl;
}
