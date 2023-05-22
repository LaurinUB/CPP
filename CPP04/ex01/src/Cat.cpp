#include "../include/Cat.hpp"

Cat::Cat(void) {
  this->type_ = "Cat";
  this->brain_ = new Brain();
}

Cat::Cat(const Cat& rhs) {
  this->type_ = rhs.type_;
  this->brain_ = new Brain(*rhs.brain_);
}

Cat::~Cat() {
  delete this->brain_;
  std::cout << GREEN << this->type_ << WHITE<< " Cat destructor called"
    << std::endl;
}

Cat&  Cat::operator=(const Cat& rhs) {
  this->type_ = rhs.type_;
  this->brain_ = rhs.brain_;
  return *this;
}

void  Cat::makeSound(void) const {
  std::cout << "Meow" << std::endl << std::endl;
}
