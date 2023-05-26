/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:18:22 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/24 16:48:31 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type_("WrongDefault") {
  std::cout << "Wrong animal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& rhs) {
  *this = rhs;
}

WrongAnimal::~WrongAnimal() {
  std::cout << "Wrong animal destructor called" << std::endl;
}

WrongAnimal&  WrongAnimal::operator=(const WrongAnimal& rhs) {
  this->type_ = rhs.type_;
  return *this;
}

std::string WrongAnimal::getType(void) const {
  return this->type_;
}

void  WrongAnimal::makeSound(void) const {
  std::cout << "no sound for default" << std::endl << std::endl;
}
