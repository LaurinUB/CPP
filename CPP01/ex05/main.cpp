/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 08:38:16 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/20 13:44:23 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void) {
  Harl  harl;

  harl.complain("warning");
  harl.complain("info");
  harl.complain("debug");
  harl.complain("error");
  harl.complain("what");
}
