/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:32:11 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/14 20:09:00 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{
	public:

		Fixed(void);
		~Fixed(void);
		Fixed(Fixed const & fix);
		Fixed & operator = (Fixed const & fix);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:

		int	fixed_point_number_;
		static const int literal_ = 8;
};

std::ostream & operator << (std::ostream & o, Fixed const & f);

#endif
