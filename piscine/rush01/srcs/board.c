/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:39:40 by isysoev           #+#    #+#             */
/*   Updated: 2025/02/23 15:52:23 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <rush.h>

void	init_array(int map[SIZE][SIZE])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			map[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	print_board(int map[SIZE][SIZE])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	ft_putchar('\n');
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			if (map[i][j] == 0)
				ft_putchar('.');
			else
				ft_putchar(map[i][j] + '0');
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	ft_putchar('\n');
}

int	populate_view(int map[SIZE][SIZE], char *str)
{
	int	i;

	i = 1;
	if (!check_input_format(str))
		return (0);
	while (i < 5)
	{
		map[0][i++] = *str - '0';
		str += 2;
	}
	i = 1;
	while (i < 5)
	{
		map[5][i++] = *str - '0';
		str += 2;
	}
	i = 1;
	while (i < 5)
	{
		map[i++][0] = *str - '0';
		str += 2;
	}
	i = 1;
	while (i < 5)
	{
		map[i++][5] = *str - '0';
		str += 2;
	}
	return (1);
}
