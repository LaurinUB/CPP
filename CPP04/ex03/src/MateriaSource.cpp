/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:16:03 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/24 15:58:33 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"
#include "../include/AMateria.hpp"

MateriaSource::MateriaSource(void) {
  for (int i = 0; i < 4; ++i) {
    this->source_[i] = NULL;
  }
}

MateriaSource::MateriaSource(const MateriaSource& rhs) {
  for (int i = 0; i < 4; ++i) {
    if (rhs.source_[i]) {
      this->source_[i] = rhs.source_[i]->clone();
    } else {
      this->source_[i] = NULL;
    }
  }
  *this = rhs;
}

MateriaSource::~MateriaSource() {
  for (int i = 0; i < 4; ++i) {
    if (this->source_[i]) {
      delete this->source_[i];
    }
  }
}

MateriaSource&  MateriaSource::operator=(const MateriaSource& rhs) {
  std::cout << "MateriaSource assignment operator" << std::endl;
  for (int i = 0; i < 4; ++i) {
    if (this->source_[i]) {
      delete this->source_[i];
      this->source_[i] = NULL;
    }
    if (rhs.source_[i]) {
      this->source_[i] = rhs.source_[i]->clone();
    } else {
      this->source_[i] = NULL;
    }
  }
  return *this;
}

void  MateriaSource::learnMateria(AMateria* type) {
  for (int i = 0; i < 4; ++i) {
    if (!this->source_[i]) {
      this->source_[i] = type;
      return;
    }
  }
  std::cout << "No space to learn " << type->getType() << std::endl;
  delete type;
}

AMateria* MateriaSource::createMateria(const std::string& type) {
  for (int i = 0; i < 4; ++i) {
    if (this->source_[i]->getType() == type) {
      return this->source_[i]->clone();
    }
  }
  std::cout << "No materia named " << type << std::endl;
  return NULL;
}
