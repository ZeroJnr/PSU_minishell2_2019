##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC_DIR	=	./src/
SRC_CMD = ./src/cmd/
SRC_MANAGE = ./src/manage/
SRC_BUILTIN = ./src/builtins/

LIB_DIR	=	./lib/

SRC	=	$(SRC_MANAGE)minishell_core.c	\
		$(SRC_MANAGE)my_free.c	\
		$(SRC_MANAGE)my_getenv.c	\
		$(SRC_CMD)cut_my_cmd.c	\
		$(SRC_CMD)delete_whitespace.c	\
		$(SRC_CMD)exec_cmd.c	\
		$(SRC_CMD)checking_acces.c	\
		$(SRC_CMD)exit_cmd.c	\
		$(SRC_MANAGE)delete_slash.c	\
		$(SRC_BUILTIN)setenv.c	\

SRC_BUILD   =   $(SRC) $(SRC_DIR)main.c \

NAME	=	mysh

CFLAGS	=	-lncurses -Wall -Wextra -Wrestrict -Werror -I./include/ -I./lib/

OBJ	=	$(SRC_BUILD:.c=.o)

OBJ_TESTS	=	$(SRC:.c=.o)

all:	$(OBJ)
	make -C $(LIB_DIR)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) -L $(LIB_DIR) -lmy

debug: CFLAGS += -g
debug: re

clean:
	@$(RM) -f $(OBJ)
	@rm -f $(LIB_DIR)*.o
	@rm -f ./lib/libmy.a

fclean: clean
	@$(RM) -f $(NAME)

re: fclean all