/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 14:02:45 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/08 16:04:09 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*zombie;

	zombie = new Zombie;
	while (N > 0)
	{
		zombie[N - 1] = Zombie(name);
		N--;
	}

	return (zombie);
}
