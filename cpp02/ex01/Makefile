# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/23 19:00:50 by jebucoy           #+#    #+#              #
#    Updated: 2023/11/28 14:06:44 by jebucoy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= fixedPoint

SRCS	=	Fixed.cpp \
			main.cpp \

OBJS	= $(SRCS:.cpp=.o)

CXX	= c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

$(NAME)	:	$(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

all	:	$(NAME)

clean	:
		rm -rf $(OBJS)

fclean	:	clean
		rm -rf $(NAME)

re	:	fclean all