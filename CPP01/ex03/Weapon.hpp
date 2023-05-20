/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:20:12 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/20 13:27:20 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP_
# define WEAPON_HPP_

#include <iostream>
#include <string>

class Weapon {
 public:
  Weapon(void);
  ~Weapon(void);
  Weapon(std::string type);

  const std::string&  getType(void) const;
  void  setType(const std::string type);

 private:
  std::string type_;
};

#endif  // WEAPON_HPP_
