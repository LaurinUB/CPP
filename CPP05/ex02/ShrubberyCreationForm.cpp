/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 08:27:08 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/31 09:58:06 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
    : Form("ShrubberyCreationForm", 145, 137), target_("default") {
    this->signed_ = false;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name)
    : Form("ShrubberyCreationForm", 145, 137), target_(name) {
    this->signed_ = false;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& rhs)
    : Form(rhs) {
  *this = rhs;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm&  ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs) {
  if (this != &rhs) {
    *this = rhs;
  }
  return *this;
}

void  ShrubberyCreationForm::execute(const Bureaucrat& executer) const {
  if (this->getExecuteRequiredGrade() < executer.getGrade()) {
    throw GradeTooLowException();
  } else {
    std::ofstream treefile;
    treefile.open((this->target_ + "_shrubbery").c_str());
    treefile << "            ▓▓▓▓" << std::endl
      << "          ▒▒▒▒▒▒▒▒" << std::endl
      << "      ░░▓▓▒▒▒▒▒▒▒▒▒▒" << std::endl
      << "          ▒▒▒▒▒▒▒▒" << std::endl
      << "      ░░▓▓▒▒▒▒▒▒▒▒▒▒" << std::endl
      << "      ▓▓▒▒▒▒▒▒▒▒▒▒▓▓" << std::endl
      << "    ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓" << std::endl
      << "    ▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▓▓" << std::endl
      << "      ▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << std::endl
      << "      ░░▒▒▒▒▒▒▒▒▒▒▒▒" << std::endl
      << "      ▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << std::endl
      << "    ▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▒▒" << std::endl
      << "    ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓" << std::endl
      << "  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒░░" << std::endl
      << "      ░░▓▓▒▒▒▒▓▓▒▒▒▒" << std::endl
      << "            ▓▓██" << std::endl
      << "            ▓▓██" << std::endl
      << "            ████" << std::endl;
    treefile.close();
  }
}
