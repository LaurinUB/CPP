#ifndef WRONGANIMAL_HPP_
#define WRONGANIMAL_HPP_

#include <iostream>
#include <string>

class WrongAnimal {
 public:
  WrongAnimal(void);
  WrongAnimal(const WrongAnimal &rhs);
  virtual ~WrongAnimal(void);
  WrongAnimal& operator=(const WrongAnimal &rhs);

  std::string getType(void) const;
  virtual void  makeSound(void) const;
 protected:
  std::string type_;
};

#endif  // WRONGANIMAL_HPP_
