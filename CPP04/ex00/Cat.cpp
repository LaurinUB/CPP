#include "Cat.hpp"

Cat::Cat(void) {
  this->type_ = "Cat";
}

Cat::Cat(const Cat& rhs) {
  *this = rhs;
}

Cat::~Cat() {}

Cat&  Cat::operator=(const Cat& rhs) {
  this->type_ = rhs.type_;
  return *this;
}

void  Cat::makeSound(void) const {
  std::cout << "Meow" << std::endl << std::endl;
}
