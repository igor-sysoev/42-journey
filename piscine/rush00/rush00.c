/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 08:19:07 by isysoev           #+#    #+#             */
/*   Updated: 2025/02/05 10:02:22 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
				ft_putchar('o');
			else if ((i == 1 || i == y) && (j != 1 && j != x))
				ft_putchar('-');
			else if ((i != 1 && i != y) && (j == 1 || j == x))
				ft_putchar('|');
			else
				ft_putchar(' ');
			j--;
		}
		ft_putchar('\n');
		i--;
	}
}
