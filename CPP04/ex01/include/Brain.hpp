/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:17:22 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/26 11:08:23 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP_
#define BRAIN_HPP_

#include <iostream>
#include <string>

class Brain {
 public:
  Brain(void);
  Brain(const Brain &rhs);
  ~Brain(void);
  Brain& operator=(const Brain &rhs);

 private:
  std::string ideas[100];
};

#endif  // BRAIN_HPP_
