# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/13 13:11:50 by luntiet-          #+#    #+#              #
#    Updated: 2023/06/13 13:12:28 by luntiet-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	mutant
CXX =	c++
CXXFLAGS =	-std=c++98 -Wall -Wextra -Werror

GREEN =	\033[0;32m
CYAN =	\033[0;36m
RED =	\033[0;31m
WHITE =	\033[0;0m

SRC =	main.cpp
OBJ =	$(SRC:.cpp=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(OBJ) -o $(NAME)
	@echo "$(GREEN)Compiled successfully$(WHITE)"

%.o:	%.cpp
	@echo "$(CYAN)Compiling$(WHITE): $<"
	@$(CXX) $(CXXFLAGS) -c -o $@ $<

run:	all
	@./$(NAME)

clean:
	@echo "$(RED)rm -f $(OBJ)$(WHITE)"
	@rm -f $(OBJ)

fclean:	clean
	@echo "$(RED)rm -f $(NAME)$(WHITE)"
	@rm -f $(NAME)

re:	fclean all

.PHONY: all $(NAME) run clean fclean re
