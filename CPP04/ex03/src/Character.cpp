/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:17:12 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/24 14:10:47 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"
#include "../include/AMateria.hpp"

Character::Character(void) {
  this->name_ = "default";
  for (int i = 0; i < 4; ++i) {
    this->inventory_[i] = nullptr;
  }
}

Character::Character(const Character& rhs) {
  std::cout << "calling Character copy constructor" << std::endl;
  this->name_ = rhs.name_;
  for (int i = 0; i < 4; ++i) {
    if (rhs.inventory_[i]) {
      this->inventory_[i] = rhs.inventory_[i]->clone();
    } else {
      this->inventory_[i] = nullptr;
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
      this->inventory_[i] = nullptr;
    }
    if (rhs.inventory_[i]) {
      this->inventory_[i] = rhs.inventory_[i]->clone();
    } else {
      this->inventory_[i] = nullptr;
    }
  }
  return *this;
}

Character::Character(const std::string name) {
  this->name_ = name;
  for (int i = 0; i < 4; ++i) {
    this->inventory_[i] = nullptr;
  }
}

std::string const & Character::getName(void) const {
  return this->name_;
}
void  Character::use(int idx, ICharacter &target) {
  if (idx < 4 && idx >= 0 && this->inventory_[idx]) {
    this->inventory_[idx]->use(target);
  } else if (idx < 4 && idx >= 0) {
    std::cout << "nothing to use" << std::endl;
  } else {
    std::cout << "index out of range" << std::endl;
  }
}

void  Character::equip(AMateria* m) {
  for (int i = 0; i < 4; ++i) {
    if (!this->inventory_[i]) {
      this->inventory_[i] = m;
      return;
    }
  }
  std::cout << "no space in inventory!" << std::endl;
  delete m;
}

AMateria* Character::getMateria(int idx) {
  if (this->inventory_[idx]) {
    return this->inventory_[idx];
  }
  return nullptr;
}

void Character::unequip(int idx) {
  if (idx < 4 && idx >= 0) {
    this->inventory_[idx] = nullptr;
  }
}
