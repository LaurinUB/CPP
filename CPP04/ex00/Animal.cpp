#include "Animal.hpp"

Animal::Animal(void) : type_("default") {}

Animal::Animal(std::string type) : type_(type) {}

Animal::Animal(const Animal& rhs) {
  *this = rhs;
}

Animal::~Animal() {}

Animal&  Animal::operator=(const Animal& rhs) {
  this->type_ = rhs.type_;
  return *this;
}

std::string Animal::getType(void) const {
  return this->type_;
}

void  Animal::makeSound(void) const {
  std::cout << "calling Animal::makeSound()" << std::endl;
  std::cout << "not an animal" << std::endl << std::endl;
}
