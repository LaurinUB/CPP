#ifndef DOG_HPP_
#define DOG_HPP_

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
 public:
  Dog(void);
  Dog(const Dog &rhs);
  ~Dog(void);
  Dog& operator=(const Dog &rhs);

  void  makeSound(void) const;
  Brain*  getBrain(void);

 private:
  Brain* brain_;
};

#endif  // DOG_HPP_
