NAME = ft_cat
CC = clang
CFLAGS = -Wall -Werror -Wextra -c
LFLAGS = -Wall -Werror -Wextra -L. -lft -o
SOURCE = main.c
OBJS = $(patsubst %.c, %.o, $(SOURCE))
HEADER = ft.h

all:$(NAME)

$(NAME): $(SOURCE)
	$(CC) $(CFLAGS) $(SOURCE)
	$(CC) $(LFLAGS) $(NAME) $(OBJS) 

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
