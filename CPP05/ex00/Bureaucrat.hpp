/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:38:16 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/25 15:12:55 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP_
#define BUREAUCRAT_HPP_

#include <exception>
#include <iostream>
#include <string>

class Bureaucrat {
 public:
  class GradeToHighException : public std::exception {};
  class GradeTooLowException : public std::exception {};
  Bureaucrat(void);
  Bureaucrat(const Bureaucrat &rhs);
  ~Bureaucrat(void);
  Bureaucrat& operator=(const Bureaucrat &rhs);

  const std::string getName(void) const;
  unsigned int getGrade(void) const;
  void  increment(Bureaucrat b);
  void  decrement(Bureaucrat b);


 private:
  const std::string name_;
  unsigned int  grade_;
};

std::ostream& operator<<(std::ostream& o, Bureaucrat b);

#endif  // BUREAUCRAT_HPP_
