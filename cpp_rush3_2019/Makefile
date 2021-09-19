##
## EPITECH PROJECT, 2020
## day06
## File description:
## Makefile
##

SRC	=	main.cpp		\
		my_text_mode.cpp

OBJ	=	$(SRC:.cpp=.o)

CFLAGS	=	-Wall -Wextra -Werror

NAME	=	MyGKrellm

all:		$(NAME)

$(NAME):	$(OBJ)
		g++ -o $(NAME) $(OBJ) $(CFLAGS) -lncurses

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f *~ $(NAME)

re:		fclean all
