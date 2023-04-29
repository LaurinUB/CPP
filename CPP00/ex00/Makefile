# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/28 11:43:56 by luntiet-          #+#    #+#              #
#    Updated: 2023/04/29 14:38:37 by luntiet-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= megaphone
CC				= c++
CPPFLAGS		= -std=c++98 -Wall -Wextra -Werror

SRC				= megaphone.cpp
OBJ				= $(SRC:.cpp=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o:	%.c
	$(CC) $(CPPFLAGS) -c -o $@ $<

run:	all
	@echo ""
	./$(NAME) "shhhhh... I think the students are asleep..."
	@echo ""
	./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
	@echo ""
	./$(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all
