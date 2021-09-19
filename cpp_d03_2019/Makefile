##
## EPITECH PROJECT, 2018
## project
## File description:
## my makefile
##

CFLAGS		=	-std=gnu11 -Wall -Wextra -Werror

SRC		=	$(wildcard *.c)

NAME		=	libstring.a

OBJ		=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	ar rc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -f *~

re:	fclean all

.PHONY: all clean fclean re
