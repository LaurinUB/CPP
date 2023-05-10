/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:18:41 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/10 18:13:40 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
	public:

		HumanA(void);
		~HumanA(void);
		HumanA(std::string name, Weapon &weapon);

		void		attack(void);
		std::string	getName(void);
		Weapon		getWeapon(void);

	private:

		std::string	name_;
		Weapon		&weapon_;

};

#endif
