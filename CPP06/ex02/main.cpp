/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:14:12 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/05 18:55:12 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <ctime>
#include <cstdlib>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void) {
  int random = std::rand() % 3;

  switch (random) {
    case 0:
      std::cout << "Created A Objext" << std::endl;
      return new A();
    case 1:
      std::cout << "Created B Objext" << std::endl;
      return new B();
    case 2:
      std::cout << "Created C Objext" << std::endl;
      return new C();

    default:
      std::cout << "Created No Objext" << std::endl;
      return NULL;
  }
}

void identify(Base* p) {
  std::cout << "identifing over Base*" << std::endl;
  if (dynamic_cast<A*>(p)) {
    std::cout << "identified as A" << std::endl;
  } else if (dynamic_cast<B*>(p)) {
    std::cout << "identified as B" << std::endl;
  } else if (dynamic_cast<C*>(p)) {
    std::cout << "identified as C" << std::endl;
  }
}

void  identify(Base& p) {
  std::cout << "identifing over Base&" << std::endl;
  try {
    (void)dynamic_cast<A&>(p);
    std::cout << "identified as A" << std::endl;
  } catch (std::exception& e) {}
  try {
    (void)dynamic_cast<B&>(p);
    std::cout << "identified as B" << std::endl;
  } catch (std::exception& e) {}
  try {
    (void)dynamic_cast<C&>(p);
    std::cout << "identified as C" << std::endl;
  } catch (std::exception& e) {}
}

int main(void) {
  std::srand(std::time(NULL));
  Base *test = generate();
  identify(test);
  identify(*test);
  delete test;
  return 0;
}
