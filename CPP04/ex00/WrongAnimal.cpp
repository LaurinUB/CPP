#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type_("WrongDefault") {}

WrongAnimal::WrongAnimal(const WrongAnimal& rhs) {
  *this = rhs;
}

WrongAnimal::~WrongAnimal() {}

WrongAnimal&  WrongAnimal::operator=(const WrongAnimal& rhs) {
  this->type_ = rhs.type_;
  return *this;
}

std::string WrongAnimal::getType(void) const {
  return this->type_;
}

void  WrongAnimal::makeSound(void) const {
  std::cout << "calling WrongAnimal::makeSound()" << std::endl;
  std::cout << "no sound for default" << std::endl << std::endl;
}
