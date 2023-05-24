/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 20:27:16 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/24 11:37:46 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

Cure::Cure(void) : AMateria("cure") {}

Cure::Cure(const Cure& rhs) {
  *this = rhs;
}

Cure::~Cure() {}

Cure&  Cure::operator=(const Cure& rhs) {
  this->type_ = rhs.type_;
  return *this;
}

AMateria* Cure::clone(void) const {
  return new Cure();
}

void  Cure::use(ICharacter& target) {
  std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
