/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:00:03 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/31 15:32:49 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP_
#define PRESIDENTIALPARDONFORM_HPP_

#include <iostream>
#include <string>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
 public:
  PresidentialPardonForm(void);
  PresidentialPardonForm(const PresidentialPardonForm &rhs);
  ~PresidentialPardonForm(void);
  PresidentialPardonForm& operator=(const PresidentialPardonForm &rhs);
  PresidentialPardonForm(const std::string name);

  void  execute(const Bureaucrat& executer) const;

 private:
  const std::string target_;
};

#endif  // PRESIDENTIALPARDONFORM_HPP_
