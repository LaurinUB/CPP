/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 11:55:16 by luntiet-          #+#    #+#             */
/*   Updated: 2023/04/29 14:54:57 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string	string_toupper(std::string str)
{
	unsigned int	i = 0;

	while (i < str.length())
	{
		str[i] = std::toupper(str[i]);
		i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
	else if (argc > 1)
	{
		while (i < argc)
		{
			std::cout << string_toupper(argv[i]);	
			i++;
		}
	}
	std::cout << "\n";
	return (0);
}
