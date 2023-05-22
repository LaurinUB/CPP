#include "../include/Brain.hpp"

Brain::Brain(void) {}

Brain::Brain(const Brain& rhs) {
  *this = rhs;
}

Brain::~Brain() {}

Brain&  Brain::operator=(const Brain& rhs) {
  for (int i = 0; i < 100; ++i) {
    this->ideas[i] = rhs.ideas[i];
  }
  return *this;
}
