/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:18:41 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/20 13:26:57 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP_
# define HUMANA_HPP_

#include <string>
#include "Weapon.hpp"

class HumanA {
 public:
  HumanA(void);
  ~HumanA(void);
  HumanA(std::string name, const Weapon &weapon);

  void  attack(void);
  std::string getName(void);
  Weapon  getWeapon(void);

 private:
  std::string name_;
  const Weapon& weapon_;
};

#endif  // HUMANA_HPP_
