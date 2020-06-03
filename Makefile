##
## EPITECH PROJECT, 2018
## RITOW Etienne / DUPROS Leegan / Yaowanart Hure
## File description:
## Makefile
##

SRC	=	main.c							\
		./evalexpr/evalexpr.c			\
		./evalexpr/multiplication.c		\
		./evalexpr/add_n_sub.c			\
		./evalexpr/parenthese.c			\
		./src/change_symbole.c			\
		./src/error.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra

CLIB	=	-L./lib/my -lmy

all:
	make -C ./lib/my/
	gcc $(SRC) -o calc $(CLIB) $(CFLAGS)

clean:
	make clean -C ./lib/my/
	rm -f *~

fclean: clean
	make fclean -C ./lib/my/
	rm -f calc

re:	fclean all
	make re -C ./lib/my/
