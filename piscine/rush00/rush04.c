/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 08:19:07 by isysoev           #+#    #+#             */
/*   Updated: 2025/02/06 10:36:09 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_corner(int is_top, int is_left)
{
	if (is_top)
		ft_putchar(is_left ? 'A' : 'C');
	else
		ft_putchar(is_left ? 'C' : 'A');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = y;
	j = x;
	while (i > 0)
	{
		j = x;
		while (j > 0)
		{
			if ((i == 1 || i == y) && (j == 1 || j == x))
				ft_print_corner(i == y, j == x);
			else if ((i == 1 || i == y) && (j != 1 && j != x))
				ft_putchar('B');
			else if ((i != 1 && i != y) && (j == 1 || j == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			j--;
		}
		ft_putchar('\n');
		i--;
	}
}
