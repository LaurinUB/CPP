/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 08:43:16 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/20 13:41:04 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <iostream>
#include <string>

#define WHITE "\033[0m"
#define RED   "\033[31m"
#define GREEN "\033[32m"

class Harl {
 public:
  Harl(void);
  ~Harl(void);
  void complain(std::string level);

 private:
  void  debug(void);
  void  info(void);
  void  warning(void);
  void  error(void);

  void (Harl::*functions_[4])();
  std::string levels_[4];
};

#endif
