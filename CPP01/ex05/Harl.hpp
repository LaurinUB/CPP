/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 08:43:16 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/12 11:05:12 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <iostream>

class Harl
{
	public:

		Harl(void);
		~Harl(void);
		void	complain(std::string level);
		
	private:

		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	
		void (Harl::*functions_[4])();	
};

#endif
