SRC	=	src/main.cpp		\
		src/Revolver.cpp	\
		src/Game.cpp

OBJ	=	$(SRC:.cpp=.o)

NAME	=	russian_roulette

CPPFLAGS	=	-I./inc

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++14

CC	=	g++

RM	=	rm -f

all:		$(OBJ)
		$(CC) -o $(NAME) $(OBJ)

clean:
		@$(RM) $(OBJ)
		@$(RM) *.gc*

fclean:		clean
		@$(RM) $(NAME)

re:	fclean all

debug: CXXFLAGS += -g3
debug: re

.PHONY: all clean fclean re debug