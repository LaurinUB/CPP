#include "ClapTrap.hpp"

int	main(void) {
  ClapTrap clap = ClapTrap("clap");

  clap.attack("notClap");
  clap.takeDamage(5);
  clap.beRepaired(5);
  return 0;
}
