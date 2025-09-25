NAME		=	ex02
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC_DIR		=	src/
RM			=	rm -rf
INC			=	-I inc/

SRC			=	$(SRC_DIR)main.cpp \
				$(SRC_DIR)Animal.cpp \
				$(SRC_DIR)Cat.cpp \
				$(SRC_DIR)Dog.cpp \
				$(SRC_DIR)WrongAnimal.cpp \
				$(SRC_DIR)WrongCat.cpp \
				$(SRC_DIR)Brain.cpp

OBJ			=	$(SRC:.cpp=.o)

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
