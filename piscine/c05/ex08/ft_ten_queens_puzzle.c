/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 15:09:22 by isysoev           #+#    #+#             */
/*   Updated: 2024/08/03 22:53:20 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#define COLS 10
#define ROWS 10

# Пока что это слишком сложно для меня, поделаю DSA на leetcode и вернусь позже. Не панимаю. 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_draw_board(int arr[ROWS][COLS])
{
	int	i;
	int	j;
	int	draw;

	i = 0;
	while (i < ROWS)
	{
		j = 0;
		draw = 0;
		while (j < COLS)
		{
			if(arr[i][j])
			{
				ft_putchar(j + '0');
				draw = 1;
			}
			j++;
		}
		if(!draw)
			ft_putchar('0');
		i++;

	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[ROWS][COLS] = {0}; 
	
	ft_draw_board(board);
	return (1);
}

int	main(void)
{
	ft_ten_queens_puzzle();
	return (1);
}
