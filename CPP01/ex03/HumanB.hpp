/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:22:17 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/10 18:33:29 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
	public:

		HumanB(void);
		~HumanB(void);
		HumanB(std::string name);

		void		attack(void);
		std::string	getName(void);
		Weapon		*getWeapon(void);
		void		setName(std::string name);
		void		setWeapon(Weapon &weapon);


	private:

		std::string	name_;
		Weapon		*weapon_;

};

#endif
