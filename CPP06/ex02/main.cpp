/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:14:12 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/05 15:35:16 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void) {
  int random = std::rand() % 3;

  switch (random) {
    case 0:
      return new A();
    case 1:
      return new B();
    case 2:
      return new C();

    default:
      return NULL;
  }
}

void identify(Base* p) {
  
}

void  identify(Base& p) {

}

int main(void) {
  std::srand(std::time(NULL));
  Base *test = generate();
  identify(test);
  return 0;
}
