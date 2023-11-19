# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/19 16:14:06 by jebucoy           #+#    #+#              #
#    Updated: 2023/11/19 18:39:15 by jebucoy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= harlFilter

SRCS	=	main.cpp \
			Harl.cpp \

OBJS	= $(SRCS:.cpp=.o)

CXX		= c++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

$(NAME) : $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

all	: $(NAME)

clean	:
		rm -rf $(OBJS)

fclean	: clean
		rm -rf $(NAME)

re	: fclean all