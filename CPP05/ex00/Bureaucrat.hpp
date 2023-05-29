/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:38:16 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/26 17:01:48 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP_
#define BUREAUCRAT_HPP_

#include <exception>
#include <iostream>
#include <string>

class Bureaucrat {
 public:
  class GradeTooHighException : public std::exception {
    const char* what(void) const throw();
  };
  class GradeTooLowException : public std::exception {
    const char* what(void) const throw();
  };
  Bureaucrat(void);
  Bureaucrat(const Bureaucrat &rhs);
  ~Bureaucrat(void);
  Bureaucrat(const std::string name, unsigned int grade);
  Bureaucrat& operator=(const Bureaucrat &rhs);

  const std::string getName(void) const;
  unsigned int getGrade(void) const;
  void  increment(void);
  void  decrement(void);


 private:
  const std::string name_;
  unsigned int  grade_;
};

std::ostream& operator<<(std::ostream& o, Bureaucrat& b);

#endif  // BUREAUCRAT_HPP_
