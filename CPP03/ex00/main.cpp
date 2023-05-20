/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 15:20:11 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/20 15:20:12 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
  ClapTrap clap = ClapTrap("clap");

  clap.attack("notClap");
  clap.takeDamage(5);
  clap.beRepaired(5);
  return 0;
}
