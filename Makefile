#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-kadh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/05 15:46:59 by caupetit          #+#    #+#              #
#    Updated: 2015/05/21 16:24:10 by ael-kadh         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = Foot

INCLUDE_DIR = includes
SRC_DIR = srcs
SRC = srcs/main.cpp srcs/APerson.cpp srcs/Coach.cpp srcs/Player.cpp \
 		srcs/Refree.cpp srcs/Team.cpp srcs/Match.cpp srcs/Competition.cpp \
		srcs/manager.cpp srcs/TmpBase.cpp
CC = g++
FLAGS = -Wall -Wextra -Werror -std=c++11 -I $(INCLUDE_DIR)

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)
	@echo "\033[32mCompiling ...\033[00m"

clean:
	@echo "\033[35mCleaning ...\033[00m"

fclean: clean
	/bin/rm -f $(NAME)
	@echo "\033[35mDeleting ...\033[00m"

re: fclean all

.PHONY: all clean fclean re
