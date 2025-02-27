/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 14:32:32 by isysoev           #+#    #+#             */
/*   Updated: 2025/02/23 16:04:19 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <rush.h>

void	fill_direction(int map[SIZE][SIZE], int i, int asc, int dir)
{
	int	j;
	int	val;

	val = 1;
	if (asc)
	{
		j = 4;
		while (j > 0)
		{
			if (dir)
				map[j--][i] = val++;
			else
				map[i][j--] = val++;
		}
	}
	else
	{
		j = 1;
		while (j < 5)
		{
			if (dir)
				map[j++][i] = val++;
			else
				map[i][j++] = val++;
		}
	}
}

void	place_fours(int map[SIZE][SIZE], int pos, int i, int is_col)
{
	if (is_col)
	{
		if (pos == 5)
			map[i][pos - 1] = 4;
		else
			map[i][pos + 1] = 4;
	}
	else
	{
		if (pos == 5)
			map[pos - 1][i] = 4;
		else
			map[pos + 1][i] = 4;
	}
}

void	place_initial_clues(int map[SIZE][SIZE])
{
	int	i;
	int	pos;

	i = 1;
	while (i < 5)
	{
		pos = 0;
		while (pos <= 5)
		{
			if (map[pos][i] == 4)
				fill_direction(map, i, pos == 5, 1);
			if (map[i][pos] == 4)
				fill_direction(map, i, pos == 5, 0);
			if (map[pos][i] == 1)
				place_fours(map, pos, i, 0);
			if (map[i][pos] == 1)
				place_fours(map, pos, i, 1);
			pos += 5;
		}
		i++;
	}
}

void	putstr(char *str)
{
	while(*str != '\0')
		ft_putchar(*str++);
	ft_putchar('\n');
}

void	place_permutation(int map[SIZE][SIZE], int row, int *permutation)
{
	int	j;
	int	i;

	i = 1;
	j = 0;
	while (i < 5)
	{
		map[row][i] = permutation[j];
		i++;
		j++;
	}
	print_board(map);
	putstr("Current row:");
	ft_putchar(row + '0');
}

void	clear_row(int map[SIZE][SIZE], int row)
{
	int	i;

	i = 1;
	while (i < 5)
		map[row][i++] = 0;
}
void	solve(int map[SIZE][SIZE])
{
	int	**permutations;
	int	current_row;
	int	found_valid;
	int	permutations_index[6] = {0, 0, 0, 0, 0, 0};

	found_valid = 0;
	current_row = 1;
	permutations = generate_permutations();
	while (current_row < 5)
	{
		found_valid = 0;
		while (permutations_index[current_row] < 24)
		{
			place_permutation(map, current_row, permutations[permutations_index[current_row]]);
			if (is_row_visible(map[current_row][0], map[current_row][5], map[current_row], 0) && validate_rows(map, 1) && validate_cols(map, 1) && are_cols_visible_so_far(map))
			{
				found_valid = 1;
				current_row++;
				break ;
			}
			permutations_index[current_row]++;
		}
		if (!found_valid)
		{
			permutations_index[current_row] = 0;
			clear_row(map, current_row);
			current_row--;
			if (current_row < 1)
			{
				break ;
			}
		}
	}
}
