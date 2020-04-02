##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

DIR	= 	./

LIB	=	$(DIR)my_length.c	\
		$(DIR)my_putchar.c	\
		$(DIR)my_putstr.c	\
		$(DIR)my_strcpy.c	\
		$(DIR)reverse_string.c	\
		$(DIR)show_number.c	\
		$(DIR)my_strstr.c	\
		$(DIR)show_string.c	\
		$(DIR)my_strdup.c	\
		$(DIR)my_strncmp.c	\
		$(DIR)my_str_ret.c	\
		$(DIR)my_str_to_word_array.c	\
		$(DIR)to_number.c	\
		$(DIR)total_words.c	\
		$(DIR)my_strcmp.c	\
		$(DIR)my_fill_double.c  \
		$(DIR)my_strcat.c   \
		$(DIR)getstat.c \

CFLAGS = -Wall -Wextra -g

OBJ	=	$(LIB:.c=.o)

NAME	=	libmy.a

all: $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm $(DIR)*.o

fclean: clean
	rm $(DIR)*.a

re:	fclean all