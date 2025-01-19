CC=clang
CFLAGS= -Wall -Wextra -Werror -I./includes -c
LFLAGS = -Wall -Wextra -Werror -o
SRCS = ./srcs/main.c ./srcs/ft_doop.c ./srcs/ft_atoi.c ./srcs/ft_calc.c ./srcs/ft_putstr.c ./srcs/ft_putnbr.c
OBJS = $(patsubst ./srcs/%.c,./srcs/%.o,$(SRCS))
NAME=ft_doop

all:$(NAME)

$(NAME):$(OBJS)
	$(CC) $(LFLAGS) $(NAME) $(OBJS)

./srcs/%.o:./srcs/%.c
	$(CC) $(CFLAGS) $< -o $@ -g

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

.PHONY=all clean fclean
