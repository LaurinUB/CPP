/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:11:25 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/10 11:28:47 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie;
	int		i = 0;

	zombie = zombieHorde(3, "Peter");
	while (i < 3)
		zombie[i++].announce();
	delete [] zombie;
	i = 0;
	zombie = zombieHorde(10, "Dieter");
	while (i < 10)
		zombie[i++].announce();
	delete [] zombie;
	return (0);
}
