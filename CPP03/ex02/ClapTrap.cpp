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
  *this = rhs;
}
 
ClapTrap::~ClapTrap(void) {
  std::cout << "ClapTrap destuctor called for: " GREEN << this->name_ << WHITE << std::endl << std::endl;
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
    std::cout << "ClapTrap " GREEN  << this->name_ << WHITE " has no energy to attack!" << std::endl << std::endl;
  } else {
    std::cout << "ClapTrap " GREEN << this->name_ << WHITE " attacks " << target;
    std::cout << ", causing " << this->attack_damage_ << " points of damage!" << std::endl;

    this->energy_points_--;
    std::cout << GREEN << this->name_ << WHITE " has " << this->energy_points_ << " energy poinst left." << std::endl << std::endl;
  }
}

void    ClapTrap::takeDamage(unsigned int amount) {
  std::cout << "ClapTrap " GREEN << this->name_ << WHITE " takes " << amount << " damage!" << std::endl;
  this->hit_points_ -= amount;

  if (this->hit_points_ <= 0) {
    std::cout << "ClapTrap " GREEN << this->name_ << WHITE " has no hit_points_ left!" << std::endl << std::endl;
  } else {
    std::cout << GREEN << this->name_ << WHITE " has " << this->hit_points_<< " hit_points left." << std::endl << std::endl;
  }
}

void    ClapTrap::beRepaired(unsigned int amount) {
  if (this->energy_points_ <= 0 || this->hit_points_ <= 0) {
    std::cout << "ClapTrap " GREEN  << this->name_ << WHITE " has no energy to to repair!" << std::endl << std::endl;
  } else {
  std::cout << "ClapTrap " GREEN << this->name_ << WHITE " repairs for " << amount << std::endl;

  this->hit_points_ += amount;
  this->energy_points_--;
  std::cout << GREEN << this->name_ << WHITE " has " << this->hit_points_<< " hit_points now." << std::endl;
  std::cout << GREEN << this->name_ << WHITE " has " << this->energy_points_ << " energy poinst left." << std::endl << std::endl;
  }
}
