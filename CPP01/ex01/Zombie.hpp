/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:19:32 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/20 13:34:32 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP_
#define ZOMBIE_HPP_

#include <iostream>
#include <string>

#define WHITE  "\033[0m"
#define RED    "\033[31m"
#define GREEN  "\033[32m"
#define YELLOW "\033[33m"
#define PURPLE "\033[35m"

class Zombie {
 public :
  Zombie(void);
  ~Zombie(void);
  Zombie(std::string name);

  void  announce(void);
  void  setName(std::string name);

 private :
    std::string name_;
};

Zombie  *zombieHorde(int N, std::string name);

#endif  // ZOMBIE_HPP_
