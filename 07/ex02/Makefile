NAME	=	Array

CXX	= c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g3 -fsanitize=address

SRCS	=	main.cpp \

OBJS	=	$(SRCS:.cpp=.o)

$(NAME)	:	$(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

all	:	$(NAME)

clean	:
		rm -rf $(OBJS)

fclean	:	clean
		rm -rf $(NAME)

re	:	fclean all