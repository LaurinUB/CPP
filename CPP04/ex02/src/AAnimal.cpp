/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:16:12 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/24 16:14:08 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AAnimal.hpp"

Animal::Animal(void) : type_("default") {
  std::cout << "Animal constructor called" << std::endl;
}

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
