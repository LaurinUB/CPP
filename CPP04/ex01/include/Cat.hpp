#ifndef CAT_HPP_
#define CAT_HPP_

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
 public:
  Cat(void);
  Cat(const Cat &rhs);
  ~Cat(void);
  Cat& operator=(const Cat &rhs);

  void  makeSound(void) const;

 private:
  Brain* brain_;
};

#endif  // CAT_HPP_
