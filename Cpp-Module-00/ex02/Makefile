# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: efaustin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/23 10:54:52 by efaustin          #+#    #+#              #
#    Updated: 2025/04/23 17:45:37 by efaustin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	account
CPP			=	c++
CPPFLAGS	=	-Wextra -Werror -Wall -std=c++98
RM			=	rm -rf

SRCS		=	Account.cpp \
				tests.cpp
OBJS		=	$(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
