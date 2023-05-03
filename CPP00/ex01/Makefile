# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/28 11:43:56 by luntiet-          #+#    #+#              #
#    Updated: 2023/05/03 17:20:48 by luntiet-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= Phonebook
CC				= c++
CPPFLAGS		= -std=c++98 -Wall -Wextra -Werror

GREEN			= \033[0;32m
CYAN			= \033[0;36m
RED				= \033[0;31m
WHITE			= \033[0m

SRC				= PhoneBook.cpp Contact.cpp main.cpp
OBJ				= $(SRC:.cpp=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $(NAME)
	@echo "$(GREEN)Compiled successfully$(WHITE)"

%.o:	%.cpp
	@echo "$(CYAN)Compiling$(WHITE):	$<"
	@$(CC) $(CPPFLAGS) -c -o $@ $<

run:	all
	./$(NAME)

clean:
	@echo "$(RED)rm -f $(OBJ)$(WHITE)"
	@rm -f $(OBJ)

fclean:	clean
	@echo "$(RED)rm -f $(OBJ)$(WHITE)"
	@rm -f $(NAME)

re: fclean all
