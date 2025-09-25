NAME		=	ex03
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC_DIR		=	src/
RM			=	rm -rf
INC			=	-I inc/

SRC			=	$(SRC_DIR)main.cpp \
				$(SRC_DIR)AMateria.cpp \
				$(SRC_DIR)Character.cpp \
				$(SRC_DIR)Cure.cpp \
				$(SRC_DIR)Ice.cpp \
				$(SRC_DIR)MateriaSource.cpp

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
