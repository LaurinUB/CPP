/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:18:11 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/22 17:18:12 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal(void) : type_("default") {}

Animal::Animal(const Animal& rhs) {
  *this = rhs;
}

Animal::~Animal() {
  std::cout << GREEN << this->type_ << WHITE<< " Animal destructor called"
    << std::endl;
}

Animal&  Animal::operator=(const Animal& rhs) {
  this->type_ = rhs.type_;
  return *this;
}

std::string Animal::getType(void) const {
  return this->type_;
}

void  Animal::makeSound(void) const {
  std::cout << "not an animal" << std::endl << std::endl;
}
