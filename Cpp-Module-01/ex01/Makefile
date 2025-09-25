NAME		=	horde
CPP			=	c++
CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC			=	main.cpp \
				Zombie.cpp \
				zombieHorde.cpp

OBJ			=	$(SRC:.cpp=.o)
RM			=	rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
