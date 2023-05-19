#ifndef DIAMONDTRAP_HPP_
#define DIAMONDTRAP_HPP_

#include <iostream>
#include <string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
 public:
  DiamondTrap(void);
  DiamondTrap(const std::string name);
  DiamondTrap(const DiamondTrap &rhs);
  ~DiamondTrap(void);
  DiamondTrap& operator=(const DiamondTrap &rhs);

  void  whoAmI(void);

 private:
  std::string name_;
};

#endif  // DIAMONDTRAP_HPP_
