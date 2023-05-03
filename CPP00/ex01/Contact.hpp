/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 10:16:04 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/03 17:13:32 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>

class Contact
{
	public :

		Contact(void);
		~Contact(void);

		void			show(void);
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
