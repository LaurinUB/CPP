/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:19:55 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/20 13:30:58 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void) {
  return;
}

HumanB::~HumanB(void) {
  return;
}

HumanB::HumanB(std::string name)
    : name_(name), weapon_(NULL) {
  return;
}

void  HumanB::setWeapon(const Weapon &weapon) {
  this->weapon_ = &weapon;
}

void  HumanB::attack(void) {
  if (!this->weapon_) {
    std::cout << this->name_ << " has no weapon equiped" << std::endl;
  } else {
    std::cout << this->name_ << " attacks with their ";
    std::cout << this->weapon_->getType() << std::endl;
  }
}
