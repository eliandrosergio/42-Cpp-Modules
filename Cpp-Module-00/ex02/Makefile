NAME		=	ex02
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC_DIR		=	src/
INC_DIR		=	inc/

SRC			=	$(SRC_DIR)main.cpp \
				$(SRC_DIR)A.cpp \
				$(SRC_DIR)B.cpp \
				$(SRC_DIR)C.cpp \
				$(SRC_DIR)Base.cpp \
				$(SRC_DIR)funcs.cpp

INC			=	$(INC_DIR)A.hpp \
				$(INC_DIR)B.hpp \
				$(INC_DIR)C.hpp \
				$(INC_DIR)Base.hpp \
				$(INC_DIR)funcs.hpp

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
