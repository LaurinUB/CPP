/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:16:05 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/24 15:53:23 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat(void) {
  std::cout << "WrongCat constructor called" << std::endl;
  this->type_ = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& rhs) : WrongAnimal(rhs) {
  *this = rhs;
}

WrongCat::~WrongCat() {
  std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat&  WrongCat::operator=(const WrongCat& rhs) {
  this->type_ = rhs.type_;
  return *this;
}

void  WrongCat::makeSound(void) const {
  std::cout << "Wuff" << std::endl << std::endl;
}
