/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 10:12:49 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/20 13:04:18 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
  pos_ = 0;
  return;
}

PhoneBook::~PhoneBook(void) {
  return;
}

void  print_table(void) {
  std::cout << YELLOW  " | ";
  std::cout << std::right << std::setw(10) << "index" <<  " | ";
  std::cout << std::right << std::setw(10) << "first name" << " | ";
  std::cout << std::right << std::setw(10) << "last name" << " | ";
  std::cout << std::right << std::setw(10) << "nickname" << " | " WHITE;
  std::cout << std::endl;
}

void  PhoneBook::index_input(void) {
  int index = 0;
  std::string arg = NULL;

  while (!std::cin.eof()) {
    std::cout << "Enter contact index: ";
    std::getline(std::cin, arg, '\n');
    if (!std::cin.eof() && (arg.empty() || arg.length() != 1)) {
    std::cout << RED "Index out of range or not a number." WHITE << std::endl;
      continue;
    }
    if (arg.empty()) {
      break;
    }
    index = arg.at(0) - 48;
    if (!std::cin.eof() && index > 0 && index < 9) {
      if (this->pos_ == 0) {
        std::cout << RED "No contact at that index." WHITE << std::endl;
      } else {
        this->contact[index - 1].showlines();
        return;
      }
    } else if (!std::cin.eof()) {
      std::cout << RED "Index out of range." WHITE << std::endl;
    }
  }
}

void  PhoneBook::showall(void) {
  size_t  i = 0;
  std::string arg;

  print_table();
  while (i < 8) {
    this->contact[i].show(i + 1);
    i++;
  }
  index_input();
}

std::string force_input(std::string arg, std::string field) {
  while (arg.empty() && !std::cin.eof()) {
    std::getline(std::cin, arg, '\n');
    if (arg.empty() && !std::cin.eof())
      std::cout << RED << field << " cant be empty!" << std::endl
        << GREEN "Enter " << field << ": " WHITE;
  }
  return (arg);
}

std::string print_msg(std::string arg, std::string field) {
  if (!std::cin.eof()) {
    std::cout << GREEN "Enter " << field << ": " WHITE;
  }
  return (force_input(arg, field));
}

void  PhoneBook::add_contact(void) {
  std::string arg;

  this->contact[pos_ % 8].set_first_name(print_msg(arg, "first name"));
  this->contact[pos_ % 8].set_last_name(print_msg(arg, "last name"));
  this->contact[pos_ % 8].set_nickname(print_msg(arg, "nickname"));
  this->contact[pos_ % 8].set_phone_number(print_msg(arg, "phone number"));
  this->contact[pos_ % 8].set_darkest_secret(print_msg(arg, "darkest secret"));
  if (!std::cin.eof()) {
    std::cout << GREEN "contact added!" WHITE << std::endl;
  }
  pos_++;
}
