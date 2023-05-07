# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/06 13:26:52 by luntiet-          #+#    #+#              #
#    Updated: 2023/05/07 15:18:53 by luntiet-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME			= Account
CC				= c++
CPPFLAGS		= -std=c++98 -Wall -Wextra -Werror

GREEN			= \033[0;32m
CYAN			= \033[0;36m
RED				= \033[0;31m
WHITE			= \033[0m

SRC				= Account.cpp tests.cpp
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
	@echo "$(RED)rm -f $(NAME)$(WHITE)"
	@rm -f $(NAME)

re: fclean all
