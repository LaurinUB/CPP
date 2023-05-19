#ifndef FRAGTRAP_HPP_
#define FRAGTRAP_HPP_

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
 public:
  FragTrap(void);
  FragTrap(const std::string name);
  FragTrap(const FragTrap &rhs);
  ~FragTrap(void);
  FragTrap& operator=(const FragTrap &rhs);

    void  highFiveGuys(void);
};

#endif  // FRAGTRAP_HPP_
