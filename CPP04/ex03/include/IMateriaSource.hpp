#ifndef IMATERIASOURCE_HPP_
#define IMATERIASOURCE_HPP_

#include <iostream>
#include <string>
#include "AMateria.hpp"

class IMateriaSource {
 public:
  virtual ~IMateriaSource() {}
  virtual void learnMateria(AMateria*) = 0;
  virtual AMateria* createMateria(const std::string& type) = 0;

 protected:
  AMateria *source_[4];
};

#endif  // IMATERIASOURCE_HPP_
