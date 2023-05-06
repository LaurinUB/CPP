/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 10:16:04 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/06 12:42:15 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#define RESET       "\033[0m"
#define YELLOW      "\033[33m"

#include <iostream>

class Contact
{
	public :

		Contact(void);
		~Contact(void);

		void			show(size_t i);
		void			showlines();
		void			set_first_name(std::string arg);
		void			set_last_name(std::string arg);
		void			set_nickname(std::string arg);
		void			set_phone_number(std::string arg);
		void			set_darkest_secret(std::string arg);

		std::string		get_first_name(void);
		std::string		get_last_name(void);
		std::string		get_nickname(void);
		std::string		get_phone_number(void);
		std::string		get_darkest_secret(void);
	
	private :

		std::string	first_name_;
		std::string	last_name_;
		std::string	nickname_;
		std::string	phone_number_;
		std::string	darkest_secret_;
};

#endif
