/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 14:36:19 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/05 14:41:55 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"
#include "Data.h"

Serialize::Serialize(void) {}

Serialize::Serialize(const Serialize& rhs) {
  *this = rhs;
}

Serialize::~Serialize() {}

Serialize&  Serialize::operator=(const Serialize& rhs) {
  if (this != &rhs) {
    *this = rhs;
  }
  return *this;
}

uintptr_t Serialize::serialize(Data* ptr) {
  return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serialize::deserialize(uintptr_t raw) {
  return reinterpret_cast<Data*>(raw);
}
