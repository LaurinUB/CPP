#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap{
  public:
    FragTrap(void);
    FragTrap(const std::string name);
    FragTrap(const FragTrap &rhs);
    ~FragTrap(void);
    FragTrap& operator=(const FragTrap &rhs);

    void  highFiveGuys(void);
};

#endif
