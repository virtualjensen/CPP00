# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 21:18:52 by jebucoy           #+#    #+#              #
#    Updated: 2023/11/16 15:27:08 by jebucoy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ZombieHorde

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

SRCS =	main.cpp \
		Zombie.cpp \
		zombieHorde.cpp \

OBJS = $(SRCS:.cpp=.o)

$(NAME) : $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

all	: $(NAME)

clean	:
		rm -rf $(OBJS)

fclean	:	clean
		rm -rf $(NAME)
		
re	: fclean all
		
