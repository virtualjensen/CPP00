NAME	=	btc

CXX	=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -fsanitize=address

SRCS	=	main.cpp \
			BitcoinExchange.cpp \

OBJS	=	$(SRCS:.cpp=.o)

$(NAME)	:	$(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

all	:	$(NAME)

clean	:
		rm -rf $(OBJS)

fclean	:	clean
		rm -rf $(NAME)

re	:	fclean all