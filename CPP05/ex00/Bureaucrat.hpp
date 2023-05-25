/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:38:16 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/25 14:43:49 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP_
#define BUREAUCRAT_HPP_

#include <iostream>
#include <string>

class Bureaucrat {
 public:
  Bureaucrat(void);
  Bureaucrat(const Bureaucrat &rhs);
  ~Bureaucrat(void);
  Bureaucrat& operator=(const Bureaucrat &rhs);

  const std::string getName(void) const;
  unsigned int getGrade(void) const;

 private:
  const std::string name_;
  unsigned int  grade_;
};

#endif  // BUREAUCRAT_HPP_
