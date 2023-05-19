#include "DiamondTrap.hpp"

int main(void) {
  DiamondTrap diamond("diamond");

  diamond.whoAmI();
  diamond.attack("notDiamond");
  diamond.beRepaired(10);
  diamond.takeDamage(10);
  diamond.guardGate();
  diamond.highFiveGuys();

  return 0;
}
