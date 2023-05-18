#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

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

  private:
    std::string	name_;
    int	hit_points_;
    int	energy_points_;
    int	attack_damage_;
};

#endif
