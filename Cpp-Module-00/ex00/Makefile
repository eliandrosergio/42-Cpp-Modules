NAME		=	ex00
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

EC			=	echo
RM			=	rm -rf

SRC_DIR		=	src/
INC_DIR		=	inc/

SRC			=	$(SRC_DIR)main.cpp \
				$(SRC_DIR)ScalarConverter.cpp

OBJ			=	$(SRC:.cpp=.o)
INC			=	$(INC_DIR)ScalarConverter.hpp

all: $(NAME)

$(NAME): $(OBJ)
	@$(EC) "Criando o executavél \"$(NAME)\""
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(INC)
	@$(EC) "Compilando o \"$<\""
	@$(CXX) $(CXXFLAGS) -I$(INC_DIR) -c $< -o $@

clean:
	@$(EC) "Apagando os object"
	@$(RM) $(OBJ)

fclean: clean
	@$(EC) "Apagando o executavél"
	@$(RM) $(NAME)

re: fclean all
