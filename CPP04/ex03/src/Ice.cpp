/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 20:25:31 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/23 18:02:35 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

Ice::Ice(void) : AMateria("ice") {}

Ice::Ice(const Ice& rhs) {
  *this = rhs;
}

Ice::~Ice() {}

Ice&  Ice::operator=(const Ice& rhs) {
  static_cast<void>(rhs);
  return *this;
}

AMateria* Ice::clone(void) const {
  return new Ice();
}

void  Ice::use(ICharacter& target) {
  std::cout << "* shoots am ice bolt at " << target.getName() << " *"
    << std::endl;
}
