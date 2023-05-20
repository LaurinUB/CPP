/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 15:15:52 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/20 15:15:53 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP_
#define FRAGTRAP_HPP_

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
 public:
  FragTrap(void);
  FragTrap(const std::string name);
  FragTrap(const FragTrap &rhs);
  ~FragTrap(void);
  FragTrap& operator=(const FragTrap &rhs);

  void  highFiveGuys(void);
};

#endif  // FRAGTRAP_HPP_
