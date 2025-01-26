CC=clang
CFLAGS = -Wall -Werror -Wextra -I./includes -c
LFLAGS = -Wall -Werror -Wextra -o
SRCS = $(wildcard ./srcs/*.c)
OBJS = $(patsubst ./srcs/%.c,./srcs/%.o, $(SRCS))
NAME = c11

all:$(NAME)

./srcs/%.o:./srcs/%.c
	$(CC) $(CFLAGS) $< -o $@ -g

$(NAME):$(OBJS)
	$(CC) $(LFLAGS) $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)
	rm -rf $(NAME)
