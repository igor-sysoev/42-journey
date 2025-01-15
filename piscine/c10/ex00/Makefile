all:ft_display_file

ft_display_file:ft_display_file.c
	clang -Wall -Werror -Wextra -L. -lft $< -o $@ -g
clean: 
	rm -rf ./.*.swp

fclean: clean
	rm -f ./ft_display_file
