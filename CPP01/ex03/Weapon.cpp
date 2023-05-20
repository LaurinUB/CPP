/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:28:01 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/20 13:27:08 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) {
  return;
}

Weapon::~Weapon(void) {
  return;
}

Weapon::Weapon(std::string type): type_(type) {
  return;
}

const std::string&  Weapon::getType(void) const {
  return (this->type_);
}

void  Weapon::setType(const std::string type) {
  this->type_ = type;
}
