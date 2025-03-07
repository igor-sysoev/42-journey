/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 12:15:47 by isysoev           #+#    #+#             */
/*   Updated: 2025/03/07 16:41:43 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <bsq.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bsq(char *str, t_biggest_square *biggest_square, char fill)
{
	int	x;
	int	y;
	
	x = 0;
	y = 0;
	while (*str != '\0')
	{
		if (x >= biggest_square->x && x < biggest_square->side + biggest_square->x && y >= biggest_square->y && y < biggest_square->y + biggest_square->side)
		{
		
			ft_putchar(fill);
		}
		else
			ft_putchar(*str);
		if (*str == '\n')
		{
			y++;
			x = 0;
		}
		else
			x++;
		str++;
	}
}
