##
## EPITECH PROJECT, 2018
## Leegan DUPROS
## File description:
## Makefile
##

SRC	=	addition.c 		\
		substraction.c	\
		infin_add.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra

CLIB	=	-L./lib/my -lmy

all:
	make -C ./lib/my/
	gcc $(SRC) -o infin_add $(CLIB) $(CFLAGS)

clean:
	make clean -C ./lib/my/
	rm -f *~

fclean: clean
	make fclean -C ./lib/my/
	rm -f infin_add

re:	fclean all
	make re -C ./lib/my/
