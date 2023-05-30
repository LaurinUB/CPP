/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:00:07 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/30 14:41:39 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP_
#define ROBOTOMYREQUESTFORM_HPP_

#include <iostream>
#include <string>
#include "AForm.hpp"

class RobotomyRequestForm : public Form {
 public:
  RobotomyRequestForm(void);
  RobotomyRequestForm(const RobotomyRequestForm &rhs);
  ~RobotomyRequestForm(void);
  RobotomyRequestForm& operator=(const RobotomyRequestForm &rhs);
  RobotomyRequestForm(const std::string name);

  void  execute(const Bureaucrat& executer) const;
};

#endif  // ROBOTOMYREQUESTFORM_HPP_
