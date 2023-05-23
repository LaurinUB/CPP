#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class Character : public ICharacter {
 public:
  Character(void);
  Character(const Character &rhs);
  ~Character(void);
  Character& operator=(const Character &rhs);
  Character(const std::string name);

  void  use(int idx, Character &target);
  void  equip(AMateria* m);
  void  unequip(int idx);
};

#endif  // CHARACTER_HPP_
