NAME		=	ex03
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS		=	main.cpp \
				bsp.cpp \
				Fixed.cpp \
				Point.cpp

OBJS		=	$(SRCS:.cpp=.o)
RM			=	rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
