# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/26 16:21:45 by jebucoy           #+#    #+#              #
#    Updated: 2024/01/02 17:39:07 by jebucoy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ScalarConverter

CXX	=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS	=	main.cpp \
			ScalarConverter.cpp \

OBJS	=	$(SRCS:.cpp=.o)

$(NAME)	:	$(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

all	: $(NAME)

clean	:
		rm -rf $(OBJS)

fclean	:	clean
		rm -rf $(NAME)

re	: fclean all

