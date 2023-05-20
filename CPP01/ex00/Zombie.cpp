/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:20:26 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/20 13:10:59 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
  return;
}

Zombie::~Zombie(void) {
  std::cout << RED << this->name_ << " died" WHITE<< std::endl;
  return;
}

Zombie::Zombie(std::string name) {
  this->name_ = name;
  return;
}

void  Zombie::announce(void) {
  std::cout << this->name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
