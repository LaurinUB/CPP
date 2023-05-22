#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
  this->type_ = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& rhs) {
  *this = rhs;
}

WrongCat::~WrongCat() {}

WrongCat&  WrongCat::operator=(const WrongCat& rhs) {
  this->type_ = rhs.type_;
  return *this;
}

void  WrongCat::makeSound(void) const {
  std::cout << "Meow" << std::endl << std::endl;
}
