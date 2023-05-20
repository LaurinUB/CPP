/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:22:17 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/20 13:30:32 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP_
# define HUMANB_HPP_

#include <string>
#include "Weapon.hpp"

class HumanB {
 public:
  HumanB(void);
  ~HumanB(void);
  HumanB(std::string name);

  void  attack(void);
  std::string getName(void);
  Weapon  *getWeapon(void);
  void  setName(std::string name);
  void  setWeapon(const Weapon &weapon);

 private:
  std::string name_;
  const Weapon  *weapon_;
};

#endif  // HUMANB_HPP_
