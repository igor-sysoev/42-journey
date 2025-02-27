/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:40:24 by isysoev           #+#    #+#             */
/*   Updated: 2025/02/23 16:02:02 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <rush.h>

int	check_input_format(char *str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (i % 2 == 0)
		{
			if (str[i] >= '1' && str[i] <= '4')
				count++;
			else
				return (0);
		}
		else if (str[i] != ' ')
			return (0);
		i++;
	}
	return (count == 16);
}

int	validate_arr(int num, int row[SIZE], int partial)
{
	int	i;
	int	count;
	int	seen[5];

	i = 0;
	while (i < 5)
	{
		seen[i++] = 0;
	}
	i = 1;
	count = 0;
	while (i < 5)
	{
		if (num == row[i])
			count++;
		seen[row[i]] = 1;
		i++;
	}
	if (partial)
		return (count == 1);
	return (count == 1 && seen[1] && seen[2] && seen[3] && seen[4]);
}

int	validate_rows(int map[SIZE][SIZE], int partial)
{
	int	i;
	int	j;

	i = 1;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			if (map[i][j] != 0 && !validate_arr(map[i][j], map[i], partial))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
int	find_duplicates(int col[SIZE])
{
	int	i;
	int	j;

	j = 1;
	i = 1;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			if (col[j] != 0 && col[i] != 0 && j != i && col[j] == col[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
int	validate_cols(int map[SIZE][SIZE], int partial)
{
	int	i;
	int	j;
	int	col[SIZE];

	i = 1;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			col[j] = map[j][i];
			j++;
		}
		if (find_duplicates(col))
			return (0);
		j = 1;
		while (j < 5)
		{
			if (col[j] != 0 && !validate_arr(col[j], col, partial))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	validate(int map[SIZE][SIZE], int partial)
{
	return (validate_rows(map, partial) && validate_cols(map, partial));
}
