# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: efaustin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/16 10:53:37 by efaustin          #+#    #+#              #
#    Updated: 2025/04/23 17:44:32 by efaustin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	phonebook
CPP			=	c++
CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM			=	rm -rf

SRC_FILES	= 	main.cpp \
				Contact.cpp \
				PhoneBook.cpp

OBJ_FILES	=	$(SRC_FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(CPP) $(CPPFLAGS) $(OBJ_FILES) -o $(NAME)

clean:
	$(RM) $(OBJ_FILES)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
