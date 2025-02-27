/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:36:44 by isysoev           #+#    #+#             */
/*   Updated: 2025/02/23 14:58:29 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#define SIZE 6

int	check_duplicates(int num, int row[SIZE]);
int	populate_view(int map[SIZE][SIZE], char *str);
int	check_input_format(char *str);
void	print_board(int map[SIZE][SIZE]);
void	init_array(int map[SIZE][SIZE]);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int	validate(int map[SIZE][SIZE], int partial);
int	validate_cols(int map[SIZE][SIZE], int partial);
int	validate_rows(int map[SIZE][SIZE], int partial);
void	solve(int map[SIZE][SIZE]);
int	**generate_permutations(void);
int	is_row_visible(int visible_left, int visible_right, int row[SIZE], int partial);
int	are_cols_visible_so_far(int map[SIZE][SIZE]);
