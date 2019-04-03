##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC     =      main.cpp		\
		my_lib.h


NAME    =      107transfer

all:    $(NAME)

$(NAME):        $(SRC)
	g++ -o $(NAME) $(SRC) -g3

clean:
	rm -f *~

fclean: clean
	rm -f $(NAME)

re:     fclean all

.PHONY: all clean fclean re
