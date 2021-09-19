##
## EPITECH PROJECT, 2018
## project
## File description:
## my makefile
##

CFLAGS		=	-Wall -Wextra -Werror

SRC		=	$(wildcard *.cpp)

NAME		=	my_cat

all: link

link: $(SRC)
		@g++ -o $(NAME) $(SRC)
		@echo -n "[ "
		@echo -n "\e[1;32mOK\e[0m"
		@echo -n " ] "
		@echo    "\e[1;31mCompiling finished!\e[0m"

debug: 	$(SRC)
		g++ -g $(SRC)

clean:
		@rm -f $(NAME)
		@rm -f *~
		@echo -n "[ "
		@echo -n "\e[1;32mOK\e[0m"
		@echo -n " ] "
		@echo	 "\e[1;31mREMOVED THE BINARY FILE AND USELESS FILES!\e[0m"


fclean: 	clean
		@echo -n "[ "
		@echo -n "\e[1;32mOK\e[0m"
		@echo -n " ] "
		@echo 	 "\e[1;31mForce clean is completed!\e[0m"


re: 		fclean all
		@echo -n "[ "
		@echo -n "\e[1;32mOK\e[0m"
		@echo -n " ] "
		@echo 	 "\e[1;31mForce make is completed!\e[0m"


.PHONY: 	all obj link clean fclean re
