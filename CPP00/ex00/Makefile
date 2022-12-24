# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: xander <xander@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/06/29 14:21:50 by xander        #+#    #+#                  #
#    Updated: 2022/07/07 14:39:04 by xvoorvaa      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone
CC		=	g++
CFLAGS	=	-Wall -Werror -Wextra -std=c++98

SRCS	=	megaphone.cpp
OBJS	=	$(SRCS:.c=.o)

ifdef DEBUG
	CFLAGS += -g3 -fsanitize=address
else
	CFLAGS += -Ofast
endif

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re
