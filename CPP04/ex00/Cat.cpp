/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:16:38 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/24 16:00:49 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
  std::cout << "Cat constructor called" << std::endl;
  this->type_ = "Cat";
}

Cat::Cat(const Cat& rhs) : Animal(rhs) {
  *this = rhs;
}

Cat::~Cat() {
  std::cout << "Cat destructor called" << std::endl;
}

Cat&  Cat::operator=(const Cat& rhs) {
  this->type_ = rhs.type_;
  return *this;
}

void  Cat::makeSound(void) const {
  std::cout << "calling Cat::makeSound()" << std::endl;
  std::cout << "Meow" << std::endl << std::endl;
}
