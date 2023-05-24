/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 20:27:26 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/24 14:20:52 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"
#include "../include/Character.hpp"
#include "../include/AMateria.hpp"
#include "../include/Cure.hpp"
#include "../include/Ice.hpp"

void print() {
  IMateriaSource* src = new MateriaSource();
  std::cout << "learn Materia ice" << std::endl;
  src->learnMateria(new Ice());
  std::cout << "learn Materia cure" << std::endl;
  src->learnMateria(new Cure());
  std::cout << "learn Materia ice" << std::endl;
  src->learnMateria(new Ice());
  std::cout << "learn Materia cure" << std::endl;
  src->learnMateria(new Cure());
  std::cout << "trying learning Materia ice" << std::endl;
  src->learnMateria(new Ice());
  std::cout << "trying learning Materia cure" << std::endl;
  src->learnMateria(new Cure());
  ICharacter* me = new Character("me");
  AMateria* tmp;
  std::cout << "equping Materia ice" << std::endl;
  tmp = src->createMateria("ice");
  me->equip(tmp);
  std::cout << "equping Materia cure" << std::endl;
  tmp = src->createMateria("cure");
  me->equip(tmp);
  std::cout << "equping Materia cure" << std::endl;
  tmp = src->createMateria("cure");
  me->equip(tmp);
  std::cout << "equping Materia ice" << std::endl;
  tmp = src->createMateria("ice");
  me->equip(tmp);
  std::cout << "equping Materia with full inventory" << std::endl;

  tmp = src->createMateria("ice");
  me->equip(tmp);
  ICharacter* bob = new Character("bob");
  std::cout << std::endl;

  std::cout << "Using slot 0 up to 2" << std::endl;
  std::cout << me->getName() << ": ";
  me->use(0, *bob);
  std::cout << me->getName() << ": ";
  me->use(1, *bob);
  std::cout << me->getName() << ": ";
  me->use(2, *bob);
  std::cout << std::endl;

  std::cout << "Using slot 5" << std::endl;
  me->use(5, *bob);
  std::cout << std::endl;

  std::cout << "unequipping slot 2 and trying to use it" << std::endl;
  tmp = me->getMateria(2);
  me->unequip(2);
  me->use(2, *bob);
  std::cout << std::endl;

  std::cout << "creating a copy and using slot 1" << std::endl;
  Character stack = Character("stack");
  stack.equip(tmp);
  Character copy(stack);
  std::cout << "copy inventory adress: "<< copy.getMateria(0) << std::endl;
  std::cout << "stack inventory adress: " << stack.getMateria(0) 
    << std::endl << std::endl;
  std::cout << copy.getName() << ": ";
  copy.use(0, *bob);

  delete me;
  delete bob;
  delete src;
}

int main() {
  print();
  // system("leaks test");
  return 0;
}
