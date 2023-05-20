/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 15:15:26 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/20 15:15:28 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP_
#define SCAVTRAP_HPP_

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
 public:
  ScavTrap(void);
  ScavTrap(const std::string name);
  ScavTrap(const ScavTrap &rhs);
  ~ScavTrap(void);
  ScavTrap& operator=(const ScavTrap &rhs);

  void  attack(const std::string& target);
  void  guardGate(void);

 protected:
  int energy_points_;
};

#endif  // SCAVTRAP_HPP_
