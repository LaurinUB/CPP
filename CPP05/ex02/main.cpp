/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:37:55 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/29 07:16:02 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
  std::cout << std::endl << "Test1:" << std::endl;
  try {
    std::cout << "trying to create Form with Form(\"test\", 200, 200)"
      << std::endl;
    Form form = Form("test", 200, 200);
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << std::endl << "Test2:" << std::endl;
  try {
    std::cout << "trying to create Form with Form(\"test\", 0, 0)"
      << std::endl;
    Form form = Form("test", 0, 0);
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << std::endl << "Test3:" << std::endl;
  try {
    std::cout << "trying to initiate with Bureaucrat(\"Bob\", 10)"
      << std::endl;
    Bureaucrat bob = Bureaucrat("Bob", 10);
    std::cout << bob << std::endl;
    std::cout << "creating Form with Form(\"test\", 20, 20)" << std::endl;
    Form form = Form("test", 20, 20);
    std::cout << form << std::endl;
    std::cout << "signing the Form" << std::endl;
    form.beSigned(bob);
    std::cout << form;
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  return 0;
}
