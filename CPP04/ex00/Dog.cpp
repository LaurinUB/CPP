/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:16:47 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/24 16:01:22 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
  std::cout << "Dog constructor called" << std::endl;
  this->type_ = "Dog";
}

Dog::Dog(const Dog& rhs) : Animal(rhs) {
  *this = rhs;
}

Dog::~Dog() {
  std::cout << "Dog destructor called" << std::endl;
}

Dog&  Dog::operator=(const Dog& rhs) {
  this->type_ = rhs.type_;
  return *this;
}

void  Dog::makeSound(void) const {
  std::cout << "calling Dog::makeSound()" << std::endl;
  std::cout << "Wuff" << std::endl << std::endl;
}
