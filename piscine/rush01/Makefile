# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isysoev <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/10 17:32:50 by isysoev           #+#    #+#              #
#    Updated: 2025/02/11 15:45:17 by isysoev          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=rush01
CC=clang
CFLAGS= -Wall -Werror -Wextra -I./includes -c
LFLAGS= -Wall -Werror -Wextra -o
SRCS = $(wildcard ./srcs/*.c)
OBJS = $(patsubst ./srcs/%.c,./srcs/%.o, $(SRCS))

all:$(NAME)

./srcs/%.o:./srcs/%.c
	$(CC) $(CFLAGS) $< -o $@ -g

$(NAME):$(OBJS)
	$(CC) $(LFLAGS) $(NAME) $(OBJS)

clean: 
	rm -rf $(OBJS)
	rm -rf $(NAME)
