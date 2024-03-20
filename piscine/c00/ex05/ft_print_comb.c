/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 20:24:35 by isysoev           #+#    #+#             */
/*   Updated: 2024/03/20 14:29:20 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void);

void	print_num(int i, int k, int j);

void	print_num(int i, int k, int j)
{
	ft_putchar(i);
	ft_putchar(k);
	ft_putchar(j);
	if (i == '7' && k == '8' && j == '9')
	{
		ft_putchar('\n');
	}
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	k;
	int	j;

	i = '0';
	k = '1';
	j = '2';
	while (i <= '7')
	{
		while (k <= '8')
		{
			while (j <= '9')
			{
				print_num(i, k, j);
				j++;
			}
			j = ++k + 1;
		}
		k = ++i + 1;
		j = k + 1;
	}
}

int	main(void)
{
	ft_print_comb();
	return (1);
}
