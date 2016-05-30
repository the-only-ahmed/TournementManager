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
 		srcs/Referee.cpp srcs/Team.cpp srcs/Match.cpp srcs/Competition.cpp \
		srcs/manager.cpp srcs/TmpBase.cpp parse/parse.cpp parse/PComp.cpp \
		parse/PCoach.cpp parse/PMatch.cpp parse/PPlayer.cpp parse/PReferee.cpp \
		parse/PTeam.cpp parse/PCount.cpp
CC = g++
FLAGS = -Wall -Wextra -Werror -std=c++11 -I $(INCLUDE_DIR)

all: $(NAME)

$(NAME):
	@mkdir database
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@echo "Cleaning ..."

fclean: clean
	/bin/rm -f $(NAME)
	@/bin/rm -rf database

re: fclean all

.PHONY: all clean fclean re
