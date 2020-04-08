##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

ECHO	=	/bin/echo -e
DEFAULT	=	"\e[0m"
BOLD_T	=	"\e[1m"
DIM_T	=	"\e[2m"
UNDLN_T	=	"\e[4m"
BLACK_C	=	"\e[30m"
RED_C	=	"\e[31m"
GREEN_C	=	"\e[32m"
YELLO_C	=	"\e[33m"
BLUE_C	=	"\e[34m"
MAGEN_C	=	"\e[35m"
CYAN_C	=	"\e[36m"
WHITE_C	=	"\e[97m"
DEFAULT_C	=	"\e[39m"
LIGHT_GREY	=	"\e[37m"
DARK_GREY	=	"\e[90m"
LIGHT_RED	=	"\e[91m"
LIGHT_GREEN	=	"\e[92m"
LIGHT_YELLO	=	"\e[93m"
LIGHT_BLUE	=	"\e[94m"
LIGHT_MAGEN	=	"\e[95m"
LIGHT_CYAN	=	"\e[96m"
LINE_RETURN	=	$(ECHO) ""
COLOR_THEME	=	$(BLUE_C)

DIR	= 	./

LIB	=	$(DIR)my_length.c	\
		$(DIR)my_putchar.c	\
		$(DIR)my_putstr.c	\
		$(DIR)my_strcpy.c	\
		$(DIR)show_number.c	\
		$(DIR)my_strstr.c	\
		$(DIR)show_string.c	\
		$(DIR)my_strdup.c	\
		$(DIR)my_strncmp.c	\
		$(DIR)str_to_word_array.c	\
		$(DIR)to_number.c	\
		$(DIR)my_strcmp.c	\
		$(DIR)my_strcat.c   \
		$(DIR)my_getstat.c \
		$(DIR)my_strchr.c	\
		$(DIR)my_strchr_number.c	\
		$(DIR)my_calloc.c	\


CFLAGS = -Wall -Wextra

OBJ	=	$(LIB:.c=.o)

NAME	=	libmy.a

all: $(OBJ)
	ar rc $(NAME) $(OBJ)
	$(ECHO) $(BOLD_T)$(GREEN_C)"\n[OK] COMPILED:" $(DEFAULT)$(LIGHT_GREEN) "$(NAME).a" $(DEFAULT)

	@$(LINE_RETURN)
	@$(ECHO) $(BOLD_T)$(COLOR_THEME)"    __    _ __       ______"$(DEFAULT)
	@$(ECHO) $(BOLD_T)$(COLOR_THEME)"   / /   (_) /_     / ____/"$(DEFAULT)
	@$(ECHO) $(BOLD_T)$(COLOR_THEME)"  / /   / / __ \   / /     "$(DEFAULT)
	@$(ECHO) $(BOLD_T)$(COLOR_THEME)" / /___/ / /_/ /  / /___   "$(DEFAULT)
	@$(ECHO) $(BOLD_T)$(COLOR_THEME)"/_____/_/_.___/   \____/   "$(DEFAULT)
	@$(ECHO) $(BOLD_T)$(COLOR_THEME)"                         "$(DEFAULT)
	@$(LINE_RETURN)

clean:
	rm $(DIR)*.o

fclean: clean
	rm $(DIR)*.a

re:	fclean all

.PHONY: all $(NAME) message clean fclean re debug
