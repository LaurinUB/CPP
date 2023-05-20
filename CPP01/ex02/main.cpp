/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:55:43 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/20 13:19:02 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {
  std::string brain = "HI THIS IS BRAIN.";
  std::string* brainPtr = &brain;
  std::string& brainRef = brain;

  std::cout << "Adress of the string:\t\t"<< &brain << std::endl;
  std::cout << "Adress of the pointer:\t\t" << &brainPtr << std::endl;
  std::cout << "Adress of the reference:\t" << &brainRef
    << std::endl << std::endl;
  std::cout << "Value of string:\t\t" << brain << std::endl;
  std::cout << "Value of pointer:\t\t"<< *brainPtr << std::endl;
  std::cout << "Value of reference:\t\t"<< brainRef << std::endl;
}
