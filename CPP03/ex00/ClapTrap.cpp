#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
		: name_("Default"), hit_points_(10), energy_points_(10), attack_damage_(0) {
	std::cout << "Default constructor called" << std::endl;
	return;
}
 
ClapTrap::ClapTrap(const std::string name)
		: name_(name), hit_points_(10), energy_points_(10), attack_damage_(0) {
	std::cout << "Named constructor called with: " << std::endl;
	std::cout << "name = " << name << std::endl;
	std::cout << "hit points = 10" << std::endl;
	std::cout << "energy points = 10" << std::endl;
	std::cout << "attack damage = 0" << std::endl << std::endl;
	return;
}

ClapTrap::ClapTrap(const ClapTrap& rhs) {
	*this = rhs;
}
 
ClapTrap::~ClapTrap(void) {
	std::cout << "Destuctor called for: " << this->name_ << std::endl << std::endl;
	return;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& rhs) {
	if (this != &rhs) {
		this->name_ = rhs.name_;
		this->hit_points_ = rhs.hit_points_;
		this->energy_points_ = rhs.energy_points_;
		this->attack_damage_ = rhs.attack_damage_;
	}
	return *this;
}

void		ClapTrap::attack(const std::string& target) {
	std::cout << "ClapTrap " << this->name_ << " attacks " << target;
	std::cout << ", causing " << this->attack_damage_ << " points of damage!" << std::endl;
	this->energy_points_--;
	std::cout << this->name_ << " has " << this->energy_points_ << " energy poinst left." << std::endl << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->name_ << " takes " << amount << " damage!" << std::endl;
	this->hit_points_ -= amount;
	std::cout << this->name_ << " has " << this->hit_points_<< " hit_points left." << std::endl << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << this->name_ << " repairs for " << amount << std::endl;
	this->hit_points_ += amount;
	this->energy_points_--;
	std::cout << this->name_ << " has " << this->hit_points_<< " hit_points now." << std::endl;
	std::cout << this->name_ << " has " << this->energy_points_ << " energy poinst left." << std::endl << std::endl;
}
