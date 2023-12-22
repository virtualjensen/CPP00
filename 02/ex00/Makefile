# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/20 18:03:43 by jebucoy           #+#    #+#              #
#    Updated: 2023/11/20 18:08:08 by jebucoy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= OCF

SRCS	=	main.cpp \
			Fixed.cpp \

OBJS	= $(SRCS:.cpp=.o)

CXX	= c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

$(NAME)	: $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

all	:	$(NAME)

clean	:
		rm -rf $(OBJS)

fclean	: clean
		rm -rf $(NAME)

re	: fclean all