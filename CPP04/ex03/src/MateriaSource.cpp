#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
  for (int i = 0; i < 4; ++i) {
    this->source_[i] = nullptr;
  }
}

MateriaSource::MateriaSource(const MateriaSource& rhs) {
  *this = rhs;
}

MateriaSource::~MateriaSource() {
  for (int i = 0; i < 4; ++i) {
    if (this->source_[i]) {
      delete this->source_[i];
    }
  }
}

MateriaSource&  MateriaSource::operator=(const MateriaSource& rhs) {
  for (int i = 0; i < 4; ++i) {
    if (this->source_[i]) {
      delete this->source_[i];
    }
    this->source_[i] = rhs.source_[i];
  }
  return *this;
}

void  MateriaSource::learnMateria(AMateria* type) {
  for (int i = 0; i < 4; ++i) {
    if (!this->source_[i]) {
      this->source_[i] = type->clone();
      break;
    }
  }
}

AMateria* MateriaSource::createMateria(const std::string& type) {
  
}
