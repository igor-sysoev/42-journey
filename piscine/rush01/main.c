/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 14:37:10 by isysoev           #+#    #+#             */
/*   Updated: 2025/02/11 15:33:16 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#define SIZE 6

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
}

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
}

int	check_input_format(char *str)
{
	int	count;
	int	i;

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

int	check_duplicates(int num, int row[SIZE])
{
	int	i;
	int	count;

	i = 1;
	while (i < 5)
	{
		if (num == row[i++])
			count++;
	}
	return (count > 1);
}

int	main(int argc, char **argv)
{
	int	solution[SIZE][SIZE];

	init_array(solution);
	if (argc != 2 || !populate_view(solution, argv[1]))
	{
		ft_putstr("Error\n");
		return (1);
	}
	print_board(solution);
	return (0);
}
