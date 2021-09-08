##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##
SRC	=	./player/player_1.c	\
		./player/player_2.c	\
		./player/attack.c	\
		./player/end_print.c	\
		./navy.h	\
		./help.c	\
		./signal/first_connect.c	\
		./signal/send_hit.c	\
		./signal/signal_1.c	\
		./signal/destructor.c	\
		./main.c	\
		./size_reader.c	\
		./mapmaker/mapmaker.c	\
		./mapmaker/mapmaker_2.c	\
		./mapmaker/boat.c	\
		./mapmaker/direction.c	\
		./lib/my/my_printf.c	\
		./lib/my/my_putchar.c	\
		./lib/my/my_put_nbr.c	\
		./lib/my/my_putstr.c	\
		./lib/my/my_getnbr.c		\
		./lib/my/my_str_isnum.c	\
		./lib/my/my_strlen.c	\
		./lib/my.h	\

OBJ	=	$(SRC:.c=.o)

NAME	=	navy

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc $(SRC) -o $(NAME)

clean:
	rm *.o
	rm player/*.o
	rm signal/*.o
	rm lib/my/*.o
	rm mapmaker/*.o

fclean: clean
	rm $(NAME)

re:	all
	rm *.o
	rm player/*.o
	rm signal/*.o
	rm lib/my/*.o
	rm mapmaker/*.o
