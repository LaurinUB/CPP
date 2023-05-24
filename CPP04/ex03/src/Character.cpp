/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:17:12 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/24 11:42:33 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"
#include "../include/AMateria.hpp"

Character::Character(void) {
  this->name_ = "default";
  for (int i = 0; i < 4; ++i) {
    this->inventory_[i] = NULL;
  }
}

Character::Character(const Character& rhs) {
  this->name_ = rhs.name_;
  for (int i = 0; i < 4; ++i) {
    if (rhs.inventory_[i]) {
      this->inventory_[i] = rhs.inventory_[i]->clone();
    } else {
      this->inventory_[i] = NULL;
    }
  }
}

Character::~Character() {
  for (int i = 0; i < 4; ++i) {
    if (this->inventory_[i]) {
      delete this->inventory_[i];
    }
  }
}

Character&  Character::operator=(const Character& rhs) {
  this->name_ = rhs.name_;
  for (int i = 0; i < 4; ++i) {
    if (this->inventory_[i]) {
      delete this->inventory_[i];
      this->inventory_[i] = NULL;
    }
    if (rhs.inventory_[i]) {
      this->inventory_[i] = rhs.inventory_[i]->clone();
    } else {
      this->inventory_[i] = NULL;
    }
  }
  return *this;
}

Character::Character(const std::string name) {
  this->name_ = name;
  for (int i = 0; i < 4; ++i) {
    this->inventory_[i] = NULL;
  }
}

std::string const & Character::getName(void) const {
  return this->name_;
}
void  Character::use(int idx, ICharacter &target) {
  if (idx < 4 && idx >= 0 && this->inventory_[idx]) {
    this->inventory_[idx]->use(target);
  }
}

void  Character::equip(AMateria* m) {
  for (int i = 0; i < 4; ++i) {
    if (!this->inventory_[i]) {
      this->inventory_[i] = m;
      break;
    }
  }
}

void Character::unequip(int idx) {
  if (idx < 4 && idx >= 0) {
    this->inventory_[idx] = NULL;
  }
}
