# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/28 11:43:56 by luntiet-          #+#    #+#              #
#    Updated: 2023/05/01 10:50:15 by luntiet-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= Phonebook
CC				= c++
CPPFLAGS		= -std=c++98 -Wall -Wextra -Werror

SRC				= PhoneBook.cpp Contact.cpp main.cpp
OBJ				= $(SRC:.cpp=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o:	%.c
	$(CC) $(CPPFLAGS) -c -o $@ $<

run:	all
	./$(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all
