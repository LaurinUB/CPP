/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:20:12 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/10 15:29:45 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_H 
# define WEAPON_H

#include <iostream>

class Weapon
{
	public:

		Weapon(void);
		~Weapon(void);
		Weapon(std::string type);

		std::string	getType(void);
		void		setType(std::string type);

	private:

		std::string	type_;

};

#endif
