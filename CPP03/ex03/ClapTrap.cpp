/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 15:17:47 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/20 15:17:48 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
    : name_("Default"), hit_points_(10), energy_points_(10), attack_damage_(0) {
  std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name)
    : name_(name), hit_points_(10), energy_points_(10), attack_damage_(0) {
  std::cout << "ClapTrap named constructor called with: " << std::endl;
  std::cout << "name = " GREEN << name << WHITE << std::endl;
  std::cout << "hit points = 10" << std::endl;
  std::cout << "energy points = 10" << std::endl;
  std::cout << "attack damage = 0" << std::endl << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& rhs) {
  std::cout << "ClapTrap copy constructor called for: " GREEN;
  std::cout << this->name_ << WHITE << std::endl << std::endl;
  *this = rhs;
}

ClapTrap::~ClapTrap(void) {
  std::cout << "ClapTrap destuctor called for: " GREEN;
  std::cout << this->name_ << WHITE << std::endl << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) {
  if (this != &rhs) {
    this->name_ = rhs.name_;
    this->hit_points_ = rhs.hit_points_;
    this->energy_points_ = rhs.energy_points_;
    this->attack_damage_ = rhs.attack_damage_;
  }
  return *this;
}

void    ClapTrap::attack(const std::string& target) {
  if (this->energy_points_ <= 0 || this->hit_points_ <= 0) {
    std::cout << "ClapTrap " GREEN  << this->name_;
    std::cout << WHITE " has no energy to attack!" << std::endl << std::endl;
  } else {
    std::cout << "ClapTrap " GREEN << this->name_;
    std::cout << WHITE " attacks " << target;
    std::cout << ", causing " << this->attack_damage_;
    std::cout << " points of damage!" << std::endl;

    this->energy_points_--;
    std::cout << GREEN << this->name_ << WHITE " has ";
    std::cout << this->energy_points_ << " energy poinst left.";
    std::cout << std::endl << std::endl;
  }
}

void    ClapTrap::takeDamage(unsigned int amount) {
  std::cout << "ClapTrap " GREEN << this->name_ << WHITE " takes ";
  std::cout << amount << " damage!" << std::endl;
  this->hit_points_ -= amount;

  if (this->hit_points_ <= 0) {
    std::cout << "ClapTrap " GREEN << this->name_;
    std::cout << WHITE " has no hit_points_ left!" << std::endl << std::endl;
  } else {
    std::cout << GREEN << this->name_ << WHITE " has ";
    std::cout << this->hit_points_<< " hit_points left.";
    std::cout << std::endl << std::endl;
  }
}

void    ClapTrap::beRepaired(unsigned int amount) {
  if (this->energy_points_ <= 0 || this->hit_points_ <= 0) {
    std::cout << "ClapTrap " GREEN  << this->name_ << WHITE;
    std::cout << " has no energy to to repair!" << std::endl << std::endl;
  } else {
  std::cout << "ClapTrap " GREEN << this->name_;
  std::cout << WHITE " repairs for " << amount << std::endl;

  this->hit_points_ += amount;
  this->energy_points_--;
  std::cout << GREEN << this->name_ << WHITE " has " << this->hit_points_;
  std::cout << " hit_points now." << std::endl;
  std::cout << GREEN << this->name_ << WHITE " has " << this->energy_points_;
  std::cout << " energy poinst left." << std::endl << std::endl;
  }
}
