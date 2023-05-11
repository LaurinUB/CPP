/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:51:46 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/11 09:56:01 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string	replace_string(std::string buff, std::string s1, std::string s2)
{
	size_t			found;

	found = buff.find(s1);
	while (found != std::string::npos)
	{
		buff.erase(found, s1.length());
		buff.insert(found, s2);
		found = buff.find(s1);
	}
	return (buff);
}

void	better_sed(std::string filename, std::string s1, std::string s2)
{
	std::string		buff;
	std::ifstream	file;
	std::ofstream	replace;

	file.open(filename);
	replace.open(filename + ".replace");
	if (file.is_open() && replace.is_open())
	{
		while (std::getline(file, buff, '\n'))
			replace << replace_string(buff, s1, s2) << std::endl;
	}
	else
		std::cout << "Unable to open file" << std::endl;
	file.close();
	replace.close();
}

int	main(int argc, char **argv)
{
	std::string		filename;
	std::string		s1;
	std::string		s2;

	if (argc != 4)
	{
		std::cout << "Wrong amout of arguments!" << std::endl;
		return (1);
	}
	else
	{
		filename = argv[1];
		s1 = argv[2];
		s2 = argv[3];
		better_sed(filename, s1, s2);
	}
	return (0);
}
