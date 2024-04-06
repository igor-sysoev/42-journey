/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:02:59 by isysoev           #+#    #+#             */
/*   Updated: 2024/04/01 14:41:35 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_printnum(int n)
{
	ft_putchar(n / 10 + 48);
	ft_putchar(n % 10 + 48);
}

void	ft_printsequence(int n, int j)
{
	ft_printnum(n);
	ft_putchar(' ');
	ft_printnum(j);
	if (n == 98 && j == 99)
	{
		ft_putchar('.');
	}
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

int	main(void)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < 99)
	{
		while (j <= 99)
		{
			ft_printsequence(i, j);
			j++;
		}
		i++;
		j = i + 1 ;
	}
	return (1);
}
