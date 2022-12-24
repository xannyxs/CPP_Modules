# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: xander <xander@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/06/29 14:21:50 by xander        #+#    #+#                  #
#    Updated: 2022/07/27 19:47:40 by xvoorvaa      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	=	Template
CC		=	c++
CFLAGS	=	-Wall -Werror -Wextra -std=c++98 -pedantic
SRC_DIR	=	.
INC_DIR	=	.

SRCS	=	main.cpp
INCS	=	whatever.h

SHELL		:= /bin/bash
SOURCES		:= $(shell find $(SRC_DIR) -type f -name "*.c")
OBJS		:= $(SRCS:.c=.o)
OBJECTS		:= $(patsubst $(SRC_DIR)/%,$(OBJ_DIR)/%,$(OBJS))

PINK = \x1b[35;01m
BLUE = \x1b[34;01m
YELLOW = \x1b[33;01m
GREEN = \x1b[32;01m
RED = \x1b[31;01m
WHITE = \x1b[31;37m
RESET = \x1b[0m

START			=	"$(BLUE)---\nStarting...!\n---\n$(RESET)"
MESSAGE			=	"$(BLUE)---\nCompiling done!\n---\n$(RESET)"
COMP_MESSAGE	=	"$(GREEN)Building C++ object... $(RESET)%-33.33s\r\n"
REM_MESSAGE		=	"$(RED)Removing files...$(RESET)"

ifdef DEBUG
	CFLAGS += -g3 -fsanitize=address -O0
else
	CFLAGS += -Ofast
endif

all:	$(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INCS) | $(OBJ_DIR)
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@ -I$(INC_DIR)

$(OBJ_DIR):
	@mkdir $@

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)
	@printf $(START)
	@printf $(COMP_MESSAGE) $(SOURCES)
	@printf $(MESSAGE)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all

run: all
	./$(NAME)

.PHONY:	all clean fclean re
