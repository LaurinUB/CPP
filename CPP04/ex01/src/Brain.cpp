/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:18:17 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/22 17:18:18 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain(void) {}

Brain::Brain(const Brain& rhs) {
  *this = rhs;
}

Brain::~Brain() {}

Brain&  Brain::operator=(const Brain& rhs) {
  for (int i = 0; i < 100; ++i) {
    this->ideas[i] = rhs.ideas[i];
  }
  return *this;
}
