##
## EPITECH PROJECT, 2019
## AIA_n4s_2018
## File description:
## Makefile
##

SRC	=	main.c					\
		help_function/help_functions.c		\
		column_words.c				\
		double.c				\
		check_if_end.c				\
		get_next_line.c				\
		my_drift.c				\
		my_speed.c				\
		init_struct.c				\
		car_rules.c				\
		help_function/my_strdup.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-g -g3 -ggdb -I ./include

NAME	=	ai

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f *~ $(NAME)

re:		fclean all
