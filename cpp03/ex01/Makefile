# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/30 13:02:21 by jebucoy           #+#    #+#              #
#    Updated: 2023/11/30 13:11:57 by jebucoy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= scavTrap

CXX	= c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS	=	ClapTrap.cpp \
			ScavTrap.cpp \
			main.cpp \

OBJS	= $(SRCS:.cpp=.o)

$(NAME)	:	$(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

all	: $(NAME)

clean	:
		rm -rf $(OBJS)

fclean	: clean
		rm -rf $(NAME)

re	: fclean all