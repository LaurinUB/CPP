/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 08:27:27 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/30 15:49:47 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP_
#define SHRUBBERYCREATIONFORM_HPP_

#include <iostream>
#include <string>
#include "AForm.hpp"

class ShrubberyCreationForm : public Form {
 public:
  ShrubberyCreationForm(void);
  ShrubberyCreationForm(const ShrubberyCreationForm &rhs);
  ~ShrubberyCreationForm(void);
  ShrubberyCreationForm(const std::string name);
  ShrubberyCreationForm& operator=(const ShrubberyCreationForm &rhs);

  void  execute(const Bureaucrat& executer) const;
};

#endif  // SHRUBBERYCREATIONFORM_HPP_
