##
## EPITECH PROJECT, 2018
## RITOW Etienne / DUPROS Leegan / Huré Yaowanart
## File description:
## Makefile
##

SRC	=	my_getnbr.c			\
		my_put_nbr.c		\
		my_putchar.c		\
		my_putstr.c			\
		my_str_isalpha.c	\
		my_strcat.c			\
		my_strcmp.c			\
		my_strcpy.c			\
		my_strlen.c			\
		my_strncat.c		\
		my_strncmp.c		\
		my_strncpy.c		\
		my_swap.c			\
		my_revstr.c			\
		my_first_int_len.c	\
		my_atoi.c			\
		my_itoa.c			\
		my_skip_space.c


OBJ	= $(SRC:.c=.o)

NAME	= libmy.a

all:	$(OBJ)
		ar rc $(NAME) *.o
		rm -f $(OBJ) *~
clean:
		rm -f $(OBJ) *~

fclean:	clean
		rm -f $(NAME)

re:		fclean all
