/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 15:16:51 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/20 15:16:52 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP_
#define CLAPTRAP_HPP_

#include <string>
#include <iostream>

#define WHITE       "\033[0m"
#define GREEN       "\033[32m"
#define YELLOW      "\033[33m"

class ClapTrap {
 public:
  ClapTrap(void);
  ClapTrap(const ClapTrap &rhs);
  ClapTrap(const std::string name);
  ~ClapTrap(void);
  ClapTrap& operator=(const ClapTrap &rhs);

  void    attack(const std::string& target);
  void    takeDamage(unsigned int amount);
  void    beRepaired(unsigned int amount);

 private:
  std::string name_;
  int hit_points_;
  int energy_points_;
  int attack_damage_;
};

#endif  // CLAPTRAP_HPP_
