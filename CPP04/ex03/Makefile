# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/17 19:34:37 by luntiet-          #+#    #+#              #
#    Updated: 2023/05/22 20:29:36 by luntiet-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= test
CXX				= c++
CXXFLAGS		= -std=c++98 -Wall -Wextra -Werror
INCLUDE			= -Iinclude/

GREEN			= \033[0;32m
CYAN			= \033[0;36m
RED				= \033[0;31m
WHITE			= \033[0m

SRC_DIR 		= src/
OBJ_DIR			= build/

SRC_FILES		= main.cpp AMateria.cpp Ice.cpp
SRC				= $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ				= $(patsubst $(SRC_DIR)%.cpp, $(OBJ_DIR)%.o, $(SRC))


all:	$(NAME)

$(NAME): $(OBJ_DIR) $(OBJ)
	@$(CXX) $(OBJ) -o $(NAME)
	@echo "$(GREEN)Compiled successfully$(WHITE)"

$(OBJ_DIR):
	@mkdir -p $(dir $(OBJ_DIR))

$(OBJ_DIR)%.o:	$(SRC_DIR)%.cpp
	@echo "$(CYAN)Compiling$(WHITE): $<"
	@$(CXX) $(CXXFLAGS) $(INCLUDE) -c -o $@ $<

run:	all
	@./$(NAME)

clean:
	@echo "$(RED)rm -f $(OBJ_DIR)$(WHITE)"
	@rm -rf $(OBJ_DIR)

fclean:	clean
	@echo "$(RED)rm -f $(NAME)$(WHITE)"
	@rm -f $(NAME)

re: fclean all
