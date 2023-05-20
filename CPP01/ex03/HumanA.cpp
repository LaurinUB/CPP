/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:23:17 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/20 13:24:55 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA(void) {
  return;
}

HumanA::HumanA(std::string name, const Weapon &weapon)
    : name_(name), weapon_(weapon) {
  return;
}

void  HumanA::attack(void) {
  std::cout << this->name_ << " attacks with their "
  << this->weapon_.getType() << std::endl;
}
