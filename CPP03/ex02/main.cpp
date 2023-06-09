/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 15:20:02 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/20 15:20:02 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
  ClapTrap clap = ClapTrap("clap");
  ScavTrap scav = ScavTrap("scav");
  FragTrap frag = FragTrap("frag");

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

  frag.attack("notFrag");
  frag.takeDamage(20);
  frag.beRepaired(10);
  frag.highFiveGuys();

  return 0;
}
