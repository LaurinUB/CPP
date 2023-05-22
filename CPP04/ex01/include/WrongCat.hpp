#ifndef WRONGCAT_HPP_
#define WRONGCAT_HPP_

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
 public:
  WrongCat(void);
  WrongCat(const WrongCat &rhs);
  ~WrongCat(void);
  WrongCat& operator=(const WrongCat &rhs);

  void  makeSound(void) const;
};

#endif  // WRONGCAT_HPP_
