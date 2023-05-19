#include "DiamondTrap.hpp"

int main(void) {
  DiamondTrap diamond("diamond");

  diamond.whoAmI();
  diamond.attack("notDiamond");
  return 0;
}
