#ifndef CLAPTRAP_HPP_
#define CLAPTRAP_HPP_

#include <string>
#include <iostream>

#define WHITE       "\033[0m"
#define GREEN       "\033[32m"
#define YELLOW      "\033[33m"

class ClapTrap {
 public:
  ClapTrap(void);
  ClapTrap(const ClapTrap &rhs);
  ClapTrap(const std::string name);
  ~ClapTrap(void);
  ClapTrap& operator=(const ClapTrap &rhs);

  void    attack(const std::string& target);
  void    takeDamage(unsigned int amount);
  void    beRepaired(unsigned int amount);

 protected:
  std::string name_;
  int hit_points_;
  int energy_points_;
  int attack_damage_;
};

#endif  // CLAPTRAP_HPP_
