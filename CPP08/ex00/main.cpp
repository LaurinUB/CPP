/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:56:59 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/09 17:13:21 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <array>
#include <vector>
#include <iostream>
#include "easyfind.hpp"

int main(void) {
  // std::array<int, 8> test = {0, 1, 2, 3, 4, 5, 6, 7};
  std::vector<int> test;
  test.push_back(1);
  test.push_back(2);
  test.push_back(3);
  test.push_back(4);
  std::cout << easyfind(test, 2) << std::endl;
  return 0;
}
