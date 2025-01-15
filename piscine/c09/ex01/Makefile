all:libft.a

libft.a: srcs/ft_putchar.o srcs/ft_swap.o srcs/ft_putstr.o srcs/ft_strlen.o srcs/ft_strcmp.o
	ar rcs $@ $^

srcs/%.o:srcs/%.c
	clang -Wall -Wextra -Werror -I./includes -c $< -o $@
clean:
	-rm -f ./srcs/*.o
	-rm -rf ./.*.swp
fclean:clean
	-rm -f libft.a
re: fclean all
