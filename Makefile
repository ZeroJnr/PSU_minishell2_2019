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

COLOR_THEME	=	$(RED_C)
DEBUG_THEME	=	$(CYAN_C)
TESTS_THEME	=	$(RED_C)

SRC_DIR	=	./src/
SRC_CMD = ./src/cmd/
SRC_MANAGE = ./src/manage/
SRC_BUILTIN = ./src/builtins/
INCLUDE = ./include/
IPATH = -I$(INCLUDE) -I$(LIB_DIR)
PFLAGS = -Wall -Wextra -Wrestrict -Werror

TEST = tests/tests.c	\

LIB_DIR	=	./lib/

SRC	=	$(SRC_MANAGE)minishell_core.c	\
		$(SRC_MANAGE)my_free.c	\
		$(SRC_MANAGE)my_getenv.c	\
		$(SRC_CMD)cut_my_cmd.c	\
		$(SRC_CMD)delete_whitespace.c	\
		$(SRC_CMD)exec_cmd.c	\
		$(SRC_CMD)checking_acces.c	\
		$(SRC_MANAGE)delete_slash.c	\
		$(SRC_MANAGE)wait_cmd.c 	\
		$(SRC_MANAGE)print_prompt.c	\
		$(SRC_BUILTIN)setenv.c	\
		$(SRC_BUILTIN)exit.c	\
		$(SRC_BUILTIN)unstenv.c	\

SRC_BUILD   =   $(SRC) $(SRC_DIR)main.c \

NAME	=	mysh

TEST_BIN = unit_tests

CFLAGS	=	$(PFLAGS) $(IPATH)

OBJ	=	$(SRC_BUILD:.c=.o)

OBJ_TESTS	=	$(SRC:.c=.o)

message:
		@$(LINE_RETURN)
		@$(ECHO) $(BOLD_T)$(COLOR_THEME)" ___ ___  ____  ____   ____ _____ __ __    ___  _      _     "$(DEFAULT)
		@$(ECHO) $(BOLD_T)$(COLOR_THEME)"|   |   ||    ||    \ |    / ___/|  |  |  /  _]| |    | |    "$(DEFAULT)
		@$(ECHO) $(BOLD_T)$(COLOR_THEME)"| _   _ | |  | |  _  | |  (   \_ |  |  | /  [_ | |    | |    "$(DEFAULT)
		@$(ECHO) $(BOLD_T)$(COLOR_THEME)"|  \_/  | |  | |  |  | |  |\__  ||  _  ||    _]| |___ | |___ "$(DEFAULT)
		@$(ECHO) $(BOLD_T)$(COLOR_THEME)"|   |   | |  | |  |  | |  |/  \ ||  |  ||   [_ |     ||     |"$(DEFAULT)
		@$(ECHO) $(BOLD_T)$(COLOR_THEME)"|   |   | |  | |  |  | |  |\    ||  |  ||     ||     ||     |"$(DEFAULT)
		@$(ECHO) $(BOLD_T)$(COLOR_THEME)"|___|___||____||__|__||____|\___||__|__||_____||_____||_____|"$(DEFAULT)
		@$(LINE_RETURN)

all:	message $(OBJ)
	make -C $(LIB_DIR)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) -L $(LIB_DIR) -lmy && \
	$(ECHO) $(BOLD_T)$(GREEN_C)"\n[✔] PROGRAM OK --> COMPILED:" $(DEFAULT)$(LIGHT_GREEN) "$(NAME)\n"$(DEFAULT) || \
	$(ECHO) $(BOLD_T)$(RED_C)"[✘] PROGRAM KO -->"$(UNDLN_T)"BUILD FAILED:" $(LIGHT_RED) "$(NAME)\n"$(DEFAULT)

message_test:
		@$(LINE_RETURN)
		@$(ECHO) $(BOLD_T)$(DEBUG_THEME)"  _______________________   ____  __  ___   __"$(DEFAULT)
		@$(ECHO) $(BOLD_T)$(DEBUG_THEME)" /_  __/ ____/ ___/_  __/  / __ \/ / / / | / /"$(DEFAULT)
		@$(ECHO) $(BOLD_T)$(DEBUG_THEME)"  / / / __/  \__ \ / /    / /_/ / / / /  |/ / "$(DEFAULT)
		@$(ECHO) $(BOLD_T)$(DEBUG_THEME)" / / / /___ ___/ // /    / _, _/ /_/ / /|  /  "$(DEFAULT)
		@$(ECHO) $(BOLD_T)$(DEBUG_THEME)"/_/ /_____//____//_/____/_/ |_|\____/_/ |_/   "$(DEFAULT)
		@$(ECHO) $(BOLD_T)$(DEBUG_THEME)"                  /_____/                  "$(DEFAULT)
		@$(LINE_RETURN)

tests_run: CFLAGS += --coverage
tests_run: message_test $(OBJ_TESTS)
		make -C $(LIB_DIR)
		gcc -o $(TEST_BIN) $(OBJ_TESTS) $(TEST) -L $(LIB_DIR) -lmy $(CFLAGS) -lcriterion --coverage
		./$(TEST_BIN)
		gcovr --exclude tests --print-summary

message_debug:
		@$(LINE_RETURN)
		@$(ECHO) $(BOLD_T)$(DEBUG_THEME)"    ____       __               "$(DEFAULT)
		@$(ECHO) $(BOLD_T)$(DEBUG_THEME)"   / __ \___  / /_  __  ______ _"$(DEFAULT)
		@$(ECHO) $(BOLD_T)$(DEBUG_THEME)"  / / / / _ \/ __ \/ / / / __  /"$(DEFAULT)
		@$(ECHO) $(BOLD_T)$(DEBUG_THEME)" / /_/ /  __/ /_/ / /_/ / /_/ / "$(DEFAULT)
		@$(ECHO) $(BOLD_T)$(DEBUG_THEME)"/_____/\___/_.___/\____/\____/  "$(DEFAULT)
		@$(ECHO) $(BOLD_T)$(DEBUG_THEME)"                       /____/ "$(DEFAULT)
		@$(LINE_RETURN)

debug: CFLAGS += -g
debug: message_debug re
		clear
		valgrind ./$(NAME)

clean:
	@$(RM) -f $(OBJ)
	@rm -f $(LIB_DIR)*.o
	@rm -f ./lib/libmy.a

fclean: clean
	@$(RM) -f $(NAME)

re: fclean all

.PHONY: all $(NAME) message clean fclean re debug