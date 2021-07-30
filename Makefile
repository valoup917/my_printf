##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## .
##

SRC	=	my_print.c	\
		my_putstr.c	\
		my_put_nbr.c	\
		my_put_long.c	\
		my_strlen.c	\
		my_putchar.c	\
		convert.c	\

OBJ	=	$(SRC:.c=.o)

NAME    = lib/libmy.a

NAME2	= lib

NAME3	= libmy.a

all:	$(OBJ)
	mkdir $(NAME2)
	ar rc $(NAME) $(OBJ)
	cp lib/libmy.a ./libmy.a
	ranlib $(NAME)

clean:
	rm -f $(OBJ)
	rm -f *~
	rm -f \#*\#

fclean: clean
	rm -rf $(NAME2)
	rm -rf $(NAME3)

re:	fclean all

.PHONY:	clean fclean re all
