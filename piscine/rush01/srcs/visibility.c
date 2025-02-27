/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visibility.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 19:56:50 by isysoev           #+#    #+#             */
/*   Updated: 2025/02/23 14:59:25 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <rush.h>

int	check_visibility(int expected, int arr[SIZE], int partial)
{
	int	i;
	int	actual;
	int	max;

	max = 0;
	actual = 0;
	i = 1;
	while (i < 5)
	{
		if (arr[i] > max)
		{
			actual++;
			max = arr[i];
		}
		i++;
	}
	if (partial)
		return (actual <= expected);
	return (expected == actual);
}

int	is_row_visible(int expected_left, int expected_right, int arr[SIZE], int partial)
{
	int	backwards[SIZE];
	int	i;
	int	j;

	i = 1;
	j = 4;
	while (i < 5)
	{
		backwards[j] = arr[i];
		i++;
		j--;
	}
	return (check_visibility(expected_left, arr, partial) && check_visibility(expected_right, backwards, partial));
}

int	are_cols_visible_so_far(int map[SIZE][SIZE])
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
		j = 1;
		while (j < 5)
		{
			if (!is_row_visible(map[0][i], map[5][i], col, 1))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
