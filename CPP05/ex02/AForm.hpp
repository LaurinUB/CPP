/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 08:27:19 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/30 10:46:05 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP_
#define FORM_HPP_

#include <iostream>
#include <string>

class Bureaucrat;

class Form {
 public:
  class GradeTooHighException : public std::exception {
    const char* what(void) const throw();
  };
  class GradeTooLowException : public std::exception {
    const char* what(void) const throw();
  };
  Form(const Form &rhs);
  virtual ~Form(void);
  Form& operator=(const Form &rhs);
  Form(const std::string name, unsigned int sign_req, unsigned int exe_req);

  void  beSigned(const Bureaucrat& b);
  void  execute(const Bureaucrat& executor);

  std::string getName(void) const;
  bool  getSigned(void) const;
  unsigned int getSignRequiredGrade(void) const;
  unsigned int getExecuteRequiredGrade(void) const;

 protected:
  Form(void);
  const std::string name_;
  bool  signed_;
  const unsigned int sign_req_grade_;
  const unsigned int execute_req_grade_;
};

std::ostream& operator<<(std::ostream& o, Form& ff);

#endif  // FORM_HPP_
