/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:53:13 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/22 17:01:56 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog(void) {
  this->type_ = "Dog";
  this->brain_ = new Brain();
}

Dog::Dog(const Dog& rhs) {
  this->type_ = rhs.type_;
  this->brain_ = new Brain(*rhs.brain_);
}

Dog::~Dog() {
  delete this->brain_;
  std::cout << GREEN << this->type_ << WHITE<< " Dog destructor called"
    << std::endl;
}

Brain*  Dog::getBrain(void) {
  return this->brain_;
}
Dog&  Dog::operator=(const Dog& rhs) {
  this->type_ = rhs.type_;
  this->brain_ = rhs.brain_;
  return *this;
}

void  Dog::makeSound(void) const {
  std::cout << "Wuff" << std::endl << std::endl;
}
