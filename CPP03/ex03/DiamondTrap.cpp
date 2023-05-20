#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
    : ClapTrap(), ScavTrap(), FragTrap() {
  ClapTrap::name_ + "_clap_trap";
  this->hit_points_ = FragTrap::hit_points_;
  this->energy_points_ = ScavTrap::energy_points_;
  this->attack_damage_ = FragTrap::attack_damage_;
  std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name)
    : ClapTrap(name), ScavTrap(name), FragTrap(name) {
  ClapTrap::name_ = ClapTrap::name_ + "_clap_trap";
  this->name_ = name;
  this->hit_points_ = FragTrap::hit_points_;
  this->energy_points_ = ScavTrap::energy_points_;
  this->attack_damage_ = FragTrap::attack_damage_;

  std::cout << "DiamondTrap named constructor called with: " << std::endl;
  std::cout << "name = " GREEN << name << WHITE << std::endl;
  std::cout << "hit points = " << this->hit_points_ << std::endl;
  std::cout << "energy points = " << this->energy_points_ << std::endl;
  std::cout << "attack damage = " << this->attack_damage_;
  std::cout << std::endl << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& rhs) : ClapTrap(rhs) {
  std::cout << "DiamondTrap copy constructor called for: " GREEN;
  std::cout << this->name_ << WHITE << std::endl << std::endl;
  *this = rhs;
}

DiamondTrap::~DiamondTrap() {
  std::cout << "DiamondTrap destuctor called for: " GREEN;
  std::cout << this->name_ << WHITE << std::endl << std::endl;
  return;
}

DiamondTrap&  DiamondTrap::operator=(const DiamondTrap& rhs) {
  this->name_ = rhs.name_;
  this->hit_points_ = rhs.hit_points_;
  this->energy_points_ = rhs.energy_points_;
  this->attack_damage_ = rhs.attack_damage_;

  return (*this);
}

void  DiamondTrap::whoAmI(void) {
  std::cout << "My name is " GREEN << this->name_ << std::endl;
  std::cout << WHITE "And my clap name is " GREEN << ClapTrap::name_;
  std::cout << WHITE << std::endl << std::endl;
}
