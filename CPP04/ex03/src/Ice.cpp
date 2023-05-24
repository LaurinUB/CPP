/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 20:25:31 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/24 11:37:39 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

Ice::Ice(void) : AMateria("ice") {}

Ice::Ice(const Ice& rhs) {
  *this = rhs;
}

Ice::~Ice() {}

Ice&  Ice::operator=(const Ice& rhs) {
  this->type_ = rhs.type_;
  return *this;
}

AMateria* Ice::clone(void) const {
  return new Ice();
}

void  Ice::use(ICharacter& target) {
  std::cout << "* shoots an ice bolt at " << target.getName() << " *"
    << std::endl;
}
