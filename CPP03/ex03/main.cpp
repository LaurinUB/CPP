/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 15:15:46 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/20 15:15:46 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
