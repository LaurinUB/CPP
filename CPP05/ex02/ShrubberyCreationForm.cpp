/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 08:27:08 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/29 14:58:18 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
    : Form("default_shurbbery", 145, 137) {
    this->signed_ = false;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name)
    : Form(name + "_shubbery", 145, 137) {
    this->signed_ = false;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& rhs)
    : Form(rhs) {
  *this = rhs;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
  return;
}

ShrubberyCreationForm&  ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs) {
  if (this != &rhs) {
    *this = rhs;
  }
  return *this;
}
