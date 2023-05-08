/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:19:01 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/08 13:57:15 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie1;
	Zombie	*zombie2;
	Zombie	*zombie3;
	Zombie	*zombie4;

	zombie1 = newZombie("heap Zombie1");
	zombie1->announce();
	zombie2 = newZombie("heap Zombie1");
	zombie2->announce();
	zombie3 = newZombie("heap Zombie1");
	zombie3->announce();
	zombie4 = newZombie("heap Zombie1");
	zombie4->announce();
	randomChump("stack Zombie1");
	randomChump("stack Zombie2");
	randomChump("stack Zombie3");
	randomChump("stack Zombie4");
	std::cout << "freeing heap zombies" << std::endl;
	delete zombie1;
	delete zombie2;
	delete zombie3;
	delete zombie4;
	return (0);
}
