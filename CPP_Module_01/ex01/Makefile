# **************************************************************************** # #                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/29 14:15:01 by kmahdi            #+#    #+#              #
#    Updated: 2023/07/29 14:51:45 by kmahdi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MoarBrainz

SRC = main.cpp Zombie.cpp zombieHorde.cpp

OBJ= $(SRC:.cpp=.o)

OBJ_DIR = objects

OBJ= $(patsubst %.cpp,$(OBJ_DIR)/%.o,$(SRC))

CC = g++-11

CFLAGS = -Wall -Wextra -Werror -std=c++98

GREEN = \033[0;32m
RED = \033[0;31m
NC = \033[0m

RM = rm -f

all: $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	@$(CC) ${CFLAGS} -c $< -o $@

$(NAME): $(OBJ)
	@echo "$(GREEN)Compiling...$(NC)"
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	@$(RM) $(OBJ)
	@$(RM) -rf $(OBJ_DIR)
	@echo "$(RED)Cleaned up object files!$(NC)"

fclean: clean
	@$(RM) $(NAME)
	@$(RM) -rf $(OBJ_DIR)
	@echo "$(RED)Removed executable!$(NC)"

re: fclean all
