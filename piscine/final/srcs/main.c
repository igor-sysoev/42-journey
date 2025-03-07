/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 19:27:26 by isysoev           #+#    #+#             */
/*   Updated: 2025/03/07 16:56:31 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <bsq.h>
#include <stdlib.h>
#include <fcntl.h> 
#include <unistd.h> 

int	find_bsq(char *str, char space, t_biggest_square *biggest_square)
{
	int	biggest_size;
	int	solution_matrix[1000][1000];
	int	i;
	int	j;
	int	len;
	int 	height;

	biggest_size = 0;
	i = 0;
	while (*str != '\0')
	{
		if (*str != '\n')
		{
			if (*str == space)
				solution_matrix[i][j] = 1;
			else
				solution_matrix[i][j] = 0;
			j++;
		}
		else
		{
			i++;
			len = j;
			j = 0;
		}
		str++;
	}
	height = i;
	i = 0;
	while (i < height) 
	{
		j = 0;
		while (j < len)
		{
			if (solution_matrix[i][j] != 0 && i > 0 && j > 0)
				solution_matrix[i][j] = 1 + min(solution_matrix[i - 1][j], solution_matrix[i][j - 1], solution_matrix[i - 1][j - 1]); 
			printf("%i", solution_matrix[i][j]);
			if (solution_matrix[i][j] > biggest_size)
			{
				biggest_size = solution_matrix[i][j];
				biggest_square->side = biggest_size;
				biggest_square->x = j - biggest_size + 1;
				biggest_square->y = i - biggest_size + 1;
			}
			j++;
		}
		i++;
		printf("\n");
	}
	return (1);	
}

int	read_chars(char **original, int *line_count, char *obstacle, char *space, char *fill)
{
	char 	*str;
	char	*num;
	int		i;
	
	str = *original;
	i = 0;
	num = malloc(sizeof(char) * 5);
	while (is_numeric(*str))
	{
		num[i++] = *str++;
	}
	if (i > 0)
		*line_count = ft_atoi(num);
	*space = *str++;
	*obstacle = *str++;
	*fill = *str++;
	str++;
	*original = str;
	free(num);
	return (1);
}

int	main(int argc, char **argv)
{
	int	line_count;
	char	obstacle;
	char	space;
	char	fill;
	int	fd;
	t_biggest_square	*biggest_square;
	char		*str;

	biggest_square = malloc(sizeof(t_biggest_square));
	if (argc != 2)
		return (0);
	str = malloc(1000 * sizeof(char));
	fd = open(argv[1], O_RDONLY);
	read(fd, str, 1000);
	if (!read_chars(&str, &line_count, &obstacle, &space, &fill))
		return (0);
	find_bsq(str, space, biggest_square);
	printf("Biggest_square, x: %i, y: %i, length: %i, height: %i", biggest_square->x, biggest_square->y, biggest_square->side, biggest_square->side);
	print_bsq(str, biggest_square, fill);
	return (1);
}
