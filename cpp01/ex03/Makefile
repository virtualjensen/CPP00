# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/18 02:47:09 by jebucoy           #+#    #+#              #
#    Updated: 2023/11/18 07:10:56 by jebucoy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Unnecessaryviolence

SRCS	=	main.cpp \
			Weapon.cpp \
			HumanA.cpp \
			HumanB.cpp \
			

OBJS	= $(SRCS:.cpp=.o)

CXX		= c++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 

$(NAME)	:	$(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	
all	: $(NAME)

clean	:
		rm -rf $(OBJS)

fclean	:	clean
		rm -rf $(NAME)

re	:	fclean all