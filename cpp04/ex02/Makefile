# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/03 16:34:09 by jebucoy           #+#    #+#              #
#    Updated: 2023/12/03 19:03:45 by jebucoy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	abstractClass

SRCS	=	main.cpp \
			Brain.cpp \
			Animal.cpp \
			Cat.cpp \
			Dog.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp \

OBJS	=	$(SRCS:.cpp=.o)

CXX	= c++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -g3 -fsanitize=address

$(NAME)	:	$(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

all	: $(NAME)

clean	:
		rm -rf $(OBJS)

fclean	: clean
		rm -rf $(NAME)

re : fclean all

