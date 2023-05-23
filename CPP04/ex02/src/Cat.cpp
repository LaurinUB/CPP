/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:16:00 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/23 10:00:18 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat(void) {
  this->type_ = "Cat";
  this->brain_ = new Brain();
}

Cat::Cat(const Cat& rhs) {
  this->type_ = rhs.type_;
  this->brain_ = new Brain(*rhs.brain_);
}

Cat::~Cat() {
  delete this->brain_;
  std::cout << GREEN << this->type_ << WHITE<< " Cat destructor called"
    << std::endl;
}

Cat&  Cat::operator=(const Cat& rhs) {
  this->type_ = rhs.type_;
  *(this->brain_) = *(rhs.brain_);
  return *this;
}

void  Cat::makeSound(void) const {
  std::cout << "Meow" << std::endl << std::endl;
}
