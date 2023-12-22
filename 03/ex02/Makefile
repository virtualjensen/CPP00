# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/01 19:24:57 by jebucoy           #+#    #+#              #
#    Updated: 2023/12/01 19:28:38 by jebucoy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	fragTrap

CXX	=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS	=	main.cpp \
			FragTrap.cpp \
			ClapTrap.cpp \
			ScavTrap.cpp \

OBJS	=	$(SRCS:.cpp=.o)

$(NAME)	:	$(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

all	:	$(NAME)

clean	:
		rm -rf $(OBJS)

fclean	: clean
		rm -rf $(NAME)

re	:	fclean all