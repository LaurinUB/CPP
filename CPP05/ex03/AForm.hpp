/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 08:27:19 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/31 15:31:01 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP_
#define AFORM_HPP_

#include <iostream>
#include <string>

class Bureaucrat;

class AForm {
 public:
  class GradeTooHighException : public std::exception {
    const char* what(void) const throw();
  };
  class GradeTooLowException : public std::exception {
    const char* what(void) const throw();
  };
  AForm(const AForm &rhs);
  virtual ~AForm(void);
  AForm& operator=(const AForm &rhs);
  AForm(const std::string name, unsigned int sign_req, unsigned int exe_req);

  void  beSigned(const Bureaucrat& b);
  void  setSign(const bool t);
  virtual void  execute(const Bureaucrat& executor) const = 0;

  std::string getName(void) const;
  bool  getSigned(void) const;
  unsigned int getSignRequiredGrade(void) const;
  unsigned int getExecuteRequiredGrade(void) const;

 protected:
  AForm(void);
  const std::string name_;
  bool  signed_;
  const unsigned int sign_req_grade_;
  const unsigned int execute_req_grade_;
};

std::ostream& operator<<(std::ostream& o, AForm& ff);

#endif  // AFORM_HPP_
