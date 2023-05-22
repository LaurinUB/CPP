#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include <iostream>
#include <string>

class Animal {
 public:
  Animal(void);
  Animal(std::string type);
  Animal(const Animal &rhs);
  ~Animal(void);
  Animal& operator=(const Animal &rhs);

  std::string getType(void) const;
  virtual void  makeSound(void) const;

 protected:
  std::string type_;
};

#endif  // ANIMAL_HPP_
