/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:37:55 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/31 15:44:53 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void) {
  std::cout << std::endl << "Test1:" << std::endl;
  try {
    std::string bob = "Bob";
    Intern  tim = Intern();
    Bureaucrat thomas = Bureaucrat("Thomas", 1);
    AForm* test1 = tim.makeForm("shrubbery creation", "bob");
    AForm* test2 = tim.makeForm("robotomy request", "bob");
    AForm* test3 = tim.makeForm("presidential pardon", "bob");
    thomas.signForm(*test1);
    thomas.executeForm(*test1);
    thomas.signForm(*test2);
    thomas.executeForm(*test2);
    thomas.signForm(*test3);
    thomas.executeForm(*test3);
    delete test1;
    delete test2;
    delete test3;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  return 0;
}
