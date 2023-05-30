/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:37:55 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/30 18:41:39 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void) {
  std::cout << std::endl << "Test1:" << std::endl;
  try {
    ShrubberyCreationForm test1 = ShrubberyCreationForm("test1");
    Bureaucrat bob = Bureaucrat("bob", 1);
    std::cout << test1 << std::endl;
    std::cout << bob << std::endl;
    bob.signForm(test1);
    bob.executeForm(test1);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << std::endl << "Test2:" << std::endl;
  try {
    ShrubberyCreationForm test2 = ShrubberyCreationForm("test2");
    Bureaucrat tom = Bureaucrat("tom", 140);
    std::cout << test2 << std::endl;
    std::cout << tom << std::endl;
    tom.signForm(test2);
    tom.executeForm(test2);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << std::endl << "Test3:" << std::endl;
  try {
    RobotomyRequestForm test3 = RobotomyRequestForm("test3");
    Bureaucrat tom = Bureaucrat("tom", 1);
    std::cout << test3 << std::endl;
    std::cout << tom << std::endl;
    tom.signForm(test3);
    tom.executeForm(test3);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << std::endl << "Test4:" << std::endl;
  try {
    PresidentialPardonForm test4 = PresidentialPardonForm("test4");
    Bureaucrat tom = Bureaucrat("tom", 1);
    std::cout << test4 << std::endl;
    std::cout << tom << std::endl;
    tom.signForm(test4);
    tom.executeForm(test4);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << std::endl << "Test5:" << std::endl;
  try {
    PresidentialPardonForm test5 = PresidentialPardonForm("test5");
    Bureaucrat tom = Bureaucrat("tom", 6);
    std::cout << test5 << std::endl;
    std::cout << tom << std::endl;
    tom.signForm(test5);
    tom.executeForm(test5);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  return 0;
}
