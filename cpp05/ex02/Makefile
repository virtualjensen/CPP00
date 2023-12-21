# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/19 17:50:59 by jebucoy           #+#    #+#              #
#    Updated: 2023/12/21 16:51:28 by jebucoy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	AnnoyingForms

CXX	= c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS	=	AForm.cpp \
			RobotomyRequestForm.cpp \
			PresidentialPardonForm.cpp \
			ShrubberyCreationForm.cpp \
			Bureaucrat.cpp \
			main.cpp	\

OBJS	=	$(SRCS:.cpp=.o)

$(NAME)	:	$(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

all	:	$(NAME)

clean	:
		rm -rf $(OBJS)

fclean	:	clean
		rm -rf $(NAME)

re	: fclean all