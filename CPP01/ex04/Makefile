# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/08 10:17:25 by luntiet-          #+#    #+#              #
#    Updated: 2023/05/11 10:06:19 by luntiet-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME			= Sed
CC				= c++
CPPFLAGS		= -std=c++98 -Wall -Wextra -Werror

SRC				= main.cpp
OBJ				= $(SRC:.cpp=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $(NAME)
	@echo "$(GREEN)Compiled successfully$(WHITE)"

%.o:	%.cpp
	@echo "$(CYAN)Compiling$(WHITE): $<"
	@$(CC) $(CPPFLAGS) -c -o $@ $<

test:
	./$(NAME) test.txt it at

test2:
	./$(NAME) test2.txt words rhymes

clean:
	@echo "$(RED)rm -f $(OBJ)$(WHITE)"
	@rm -f $(OBJ)

fclean:	clean
	@echo "$(RED)rm -f $(NAME)$(WHITE)"
	@rm -f $(NAME)

re: fclean all
