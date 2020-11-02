# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpetrova <r11tsa@yahoo.com>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/26 20:38:13 by vpetrova          #+#    #+#              #
#    Updated: 2020/11/02 17:19:17 by aollero-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS := -Wall -Werror -Wextra -Wno-unused-variable -O3
NAME := rushbsq
SRCS := rushbsq.c rushbs.c file.c file1.c file2.c map.c ftatoi.c
OBJS := $(patsubst %.c, %.o, $(SRCS))

all: $(NAME)

fclean:
	rm -f *.o $(NAME)

clean: fclean

re: fclean all

$(NAME): $(OBJS)

.PHONY = fclean clean all re

