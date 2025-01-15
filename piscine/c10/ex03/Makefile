CC = clang
LFLAGS = -Wall -Wextra -Werror -L. -lft -o
CFLAGS = -Wall -Wextra -Werror -I./includes -c
SOURCE = ./srcs/main.c ./srcs/ft_str_rev.c ./srcs/ft_print_ascii.c
NAME = ft_hexdump
OBJS = $(patsubst ./srcs/%.c,./srcs/%.o,$(SOURCE))

all:$(NAME)

srcs/%.o:srcs/%.c
	$(CC) $(CFLAGS) $< -o $@ -g

$(NAME): $(OBJS)
	$(CC) $(LFLAGS) $(NAME) $(OBJS)

clean: 
	rm -f ./srcs/*.o

fclean:	clean
	rm -f $(NAME)
	
