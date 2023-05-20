/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 15:20:06 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/20 15:20:07 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
