#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
  this->name_ = "Default";
  this->hit_points_ = 100;
  this->energy_points_ = 100;
  this->attack_damage_ = 30;
  std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string name) {
  this->name_ = name;
  this->hit_points_ = 100;
  this->energy_points_ = 100;
  this->attack_damage_ = 30;

  std::cout << "FragTrap named constructor called with: " << std::endl;
  std::cout << "name = " GREEN << name << WHITE << std::endl;
  std::cout << "hit points = " << hit_points_ << std::endl;
  std::cout << "energy points = " << energy_points_ << std::endl;
  std::cout << "attack damage = " << attack_damage_ << std::endl << std::endl;
}

FragTrap::FragTrap(const FragTrap& rhs) {
  *this = rhs;
}

FragTrap::~FragTrap() {
  std::cout << "FragTrap destuctor called for: " GREEN << this->name_ << WHITE << std::endl << std::endl;
  return;
}

FragTrap&  FragTrap::operator=(const FragTrap& rhs) {
  this->name_ = rhs.name_;
  this->hit_points_= rhs.hit_points_;
  this->energy_points_ = rhs.energy_points_;
  this->attack_damage_ = rhs.attack_damage_;

  return (*this);
}

void  FragTrap::highFiveGuys(void) {
  std::cout << "Give me a high five guys!" << std::endl << std::endl;
}
