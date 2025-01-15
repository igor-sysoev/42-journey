CC = clang
CFLAGS = -Wall -Wextra -Werror -I./includes -c
LFLAGS = -Wall -Wextra -Werror -L. -lft -o
SOURCE = ./srcs/main.c ./srcs/ft_check_flags.c ./srcs/ft_is_numeric_str.c ./srcs/ft_print_error.c ./srcs/ft_atoi.c
NAME = ft_tail
OBJS = $(patsubst ./srcs/%.c,./srcs/%.o,$(SOURCE))

all:$(NAME)

srcs/%.o: srcs/%.c
	$(CC) $(CFLAGS) $^ -o $@ -g

$(NAME): $(OBJS)
	$(CC) $(LFLAGS) $(NAME) $(OBJS)

test: $(SOURCE)
	$(CC) -c $(OBJS) -g
	$(CC) $(LIBRARY) -o $(NAME)_test $(OBJS)

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
