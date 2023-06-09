/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 20:27:13 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/24 13:48:15 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

AMateria::AMateria(void) {}

AMateria::AMateria(const AMateria& rhs) {
  *this = rhs;
}

AMateria::~AMateria() {}

AMateria& AMateria::operator=(const AMateria &rhs) {
  if (this != &rhs) {
    *this = rhs;
  }
  return *this;
}

AMateria::AMateria(const std::string& type) : type_(type) {}

void AMateria::use(ICharacter& target) {
  (void)target;
  std::cout << "templete use called" << std::endl;
}

const std::string& AMateria::getType(void) const {
  return this->type_;
}
