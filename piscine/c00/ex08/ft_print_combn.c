/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 13:16:44 by isysoev           #+#    #+#             */
/*   Updated: 2024/04/06 17:41:20 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#define MAX_N 9

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_printarray(int comb[], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(comb[i] + '0');
		i++;
	}
	ft_putchar('\n');
}

void	ft_print_combn(int n)
{
	int	comb[MAX_N];
	int	max_values[MAX_N];
	int	index;
	int	pointer;
	int	base;

	index = 0;
	while (index < n)
	{
		comb[index] = index;
		max_values[index] = (10 - n) + index;
		index++;
	}
	ft_printarray(comb, n);
	while (comb[0] != max_values[0])
	{
		pointer = n - 1;
		while (comb[pointer] == max_values[pointer])
			--pointer;
		base = ++(comb[pointer]);
		while (pointer < n - 1)
			comb[++pointer] = ++base;
		ft_printarray(comb, n);
	}
}

int	main(void)
{
	ft_print_combn(3);
	return (1);
}
