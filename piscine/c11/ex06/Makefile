CC=clang
CFLAGS= -Wall -Wextra -Werror -I./includes -c
LFLAGS = -Wall -Wextra -Werror -o
NAME=main
SRCS=./srcs/ft_sort_string_tab.c ./srcs/main.c ./srcs/ft_strcmp.c
OBJS = $(patsubst ./srcs/%.c, ./srcs/%.o, $(SRCS))

all:$(NAME)

./srcs/%.o:./srcs/%.c
	$(CC) $(CFLAGS) $< -o $@ -g

$(NAME):$(OBJS)
	$(CC) $(LFLAGS) $(NAME) $(OBJS)

