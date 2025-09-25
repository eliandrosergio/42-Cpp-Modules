NAME		=	ex00
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

INC			=	-I ./inc/
SRC_DIR		=	./src/
OBJ_DIR		=	./obj/

SRC			=	$(SRC_DIR)main.cpp \
				$(SRC_DIR)Animal.cpp \
				$(SRC_DIR)Cat.cpp \
				$(SRC_DIR)Dog.cpp \
				$(SRC_DIR)WrongAnimal.cpp \
				$(SRC_DIR)WrongCat.cpp

OBJ			=	$(SRC:.cpp=.o)
RM			=	rm -rf

all: $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INC) -c $< -o $@ 

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
