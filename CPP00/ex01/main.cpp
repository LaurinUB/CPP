/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 10:16:47 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/20 12:48:58 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void) {
  PhoneBook book;
  std::string arg;

  while (!std::cin.eof()) {
    std::cout << "Enter command: ";
    std::getline(std::cin, arg, '\n');
    if (!arg.compare("EXIT")) {
      break;
    } else if (!arg.compare("ADD")) {
      book.add_contact();
    } else if (!arg.compare("SEARCH")) {
      if (book.contact[0].get_first_name().empty()) {
        std::cout << RED "No contact saved!" WHITE << std::endl;
      } else {
        book.showall();
      }
    }
  }
  return (0);
}
