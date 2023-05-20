/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 15:15:32 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/20 15:15:33 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
  this->hit_points_ = 100;
  this->energy_points_ = 50;
  this->attack_damage_ = 20;
  std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name) {
  this->hit_points_ = 100;
  this->energy_points_ = 50;
  this->attack_damage_ = 20;

  std::cout << "ScavTrap named constructor called with: " << std::endl;
  std::cout << "name = " GREEN << name << WHITE << std::endl;
  std::cout << "hit points = 100" << std::endl;
  std::cout << "energy points = 50" << std::endl;
  std::cout << "attack damage = 20" << std::endl << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& rhs) : ClapTrap(rhs) {
  std::cout << "ScavTrap copy constructor called for: " GREEN;
  std::cout << this->name_ << WHITE << std::endl << std::endl;
  *this = rhs;
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap destuctor called for: " GREEN << this->name_;
  std::cout << WHITE << std::endl << std::endl;
  return;
}

ScavTrap&  ScavTrap::operator=(const ScavTrap& rhs) {
  this->name_ = rhs.name_;
  this->hit_points_ = rhs.hit_points_;
  this->energy_points_ = rhs.energy_points_;
  this->attack_damage_ = rhs.attack_damage_;

  return (*this);
}

void  ScavTrap::attack(const std::string& target) {
  if (this->energy_points_ <= 0 || this->hit_points_ <= 0) {
    std::cout << "ScavTrap " GREEN << this->name_;
    std::cout << WHITE " has no energy to attack!" << std::endl << std::endl;
  } else {
    std::cout << "ScavTrap " GREEN << this->name_ << WHITE " attack " << target;
    std::cout << ", causing " << this->attack_damage_ << " points of damage!";
    std::cout << std::endl;

    this->energy_points_--;
    std::cout << GREEN << this->name_ << WHITE " has " << this->energy_points_;
    std::cout << " energy poinst left." << std::endl << std::endl;
  }
}

void  ScavTrap::guardGate(void) {
  std::cout << "Scavtrap " GREEN << this->name_;
  std::cout << WHITE " is in Gate keeper mode." << std::endl << std::endl;
}
