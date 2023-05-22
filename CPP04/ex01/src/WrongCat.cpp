/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:18:59 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/22 17:18:59 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat(void) {
  this->type_ = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& rhs) {
  *this = rhs;
}

WrongCat::~WrongCat() {}

WrongCat&  WrongCat::operator=(const WrongCat& rhs) {
  this->type_ = rhs.type_;
  return *this;
}

void  WrongCat::makeSound(void) const {
  std::cout << "Wuff" << std::endl << std::endl;
}
