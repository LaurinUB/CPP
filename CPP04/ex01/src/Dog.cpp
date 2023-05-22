#include "../include/Dog.hpp"

Dog::Dog(void) {
  this->type_ = "Dog";
  this->brain_ = new Brain();
}

Dog::Dog(const Dog& rhs) {
  *this = rhs;
}

Dog::~Dog() {
  delete this->brain_;
  std::cout << GREEN << this->type_ << WHITE<< " Dog destructor called"
    << std::endl;
}

Dog&  Dog::operator=(const Dog& rhs) {
  this->type_ = rhs.type_;
  return *this;
}

void  Dog::makeSound(void) const {
  std::cout << "Wuff" << std::endl << std::endl;
}
