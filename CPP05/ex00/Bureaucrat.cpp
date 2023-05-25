/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:37:45 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/25 14:45:30 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name_("default"), grade_(1) {
  std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& rhs) {
  *this = rhs;
}

Bureaucrat::~Bureaucrat() {
  std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat&  Bureaucrat::operator=(const Bureaucrat& rhs) {
  if (this != &rhs) {
    *this = rhs;
  }
  return *this;
}
