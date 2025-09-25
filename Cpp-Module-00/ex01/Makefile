NAME		=	ex01
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC_DIR		=	src/
INC_DIR		=	inc/

SRC			=	$(SRC_DIR)main.cpp \
				$(SRC_DIR)utils.cpp \
				$(SRC_DIR)Serializer.cpp

INC			=	$(INC_DIR)data.hpp \
				$(INC_DIR)Serializer.hpp

EC			=	echo
RM			=	rm -rf
OBJ			=	$(SRC:.cpp=.o)

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
