/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 10:15:46 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/20 12:50:30 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

#define WHITE   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define PURPLE  "\033[35m"

class PhoneBook {
 public:
  PhoneBook(void);
  ~PhoneBook(void);

  void  add_contact(void);
  void  showall(void);

  Contact contact[8];

 private:
  void  index_input(void);
  size_t  pos_;
};

#endif
