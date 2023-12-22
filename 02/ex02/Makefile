# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 18:01:17 by jebucoy           #+#    #+#              #
#    Updated: 2023/11/28 18:04:20 by jebucoy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= fixedPoint

CXX	= c++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS	=	main.cpp \
			Fixed.cpp \

OBJS	= $(SRCS:.cpp=.o)

$(NAME)	:	$(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

all	: $(NAME)

clean	:
		rm -rf $(OBJS)

fclean	:	clean
		rm -rf $(NAME)

re	:	fclean all