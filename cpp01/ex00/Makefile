# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/10 18:54:54 by jebucoy           #+#    #+#              #
#    Updated: 2023/11/13 21:04:29 by jebucoy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

CXX	= c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp \
		Zombie.cpp \
		newZombie.cpp \
		randomChump.cpp \

OBJS = $(SRCS:.cpp=.o)

$(NAME) : $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

all	: $(NAME)

clean	: 
		rm -rf $(OBJS)

fclean	: clean
		rm -rf $(NAME)

re	: fclean all
