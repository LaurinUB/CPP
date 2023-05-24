/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:16:28 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/24 16:08:59 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type_("default") {
  std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& rhs) {
  *this = rhs;
}

Animal::~Animal() {
  std::cout << "Animal destructor called" << std::endl;
}

Animal&  Animal::operator=(const Animal& rhs) {
  this->type_ = rhs.type_;
  return *this;
}

std::string Animal::getType(void) const {
  return this->type_;
}

void  Animal::makeSound(void) const {
  std::cout << "calling Animal::makeSound()" << std::endl;
  std::cout << "not an animal" << std::endl << std::endl;
}
