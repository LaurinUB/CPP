#include "ScavTrap.hpp"

int main(void) {
  ClapTrap clap = ClapTrap("clap");
  ScavTrap scav = ScavTrap("scav");

  clap.attack("notClap");
  clap.attack("notClap");
  clap.attack("notClap");
  clap.attack("notClap");
  clap.takeDamage(5);
  clap.beRepaired(5);
  clap.attack("notClap");
  clap.attack("notClap");
  clap.attack("notClap");
  clap.attack("notClap");
  clap.attack("notClap");
  clap.attack("notClap");
  clap.beRepaired(5);

  scav.attack("notScav");
  scav.takeDamage(40);
  scav.beRepaired(100);
  scav.guardGate();

  return 0;
}
