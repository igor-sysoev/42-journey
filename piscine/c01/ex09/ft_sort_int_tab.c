/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 20:20:44 by isysoev           #+#    #+#             */
/*   Updated: 2024/04/07 21:02:07 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				ft_swap(&tab[j], &tab[j + 1]);
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	int	arr[10];
	int	i;

	i = 0;
	arr[0] = 15;
	arr[1] = 10;
	arr[2] = 20;
	arr[3] = 100;
	arr[4] = 5;
	arr[5] = 70;
	arr[6] = 90;
	arr[7] = 50;
	arr[8] = 45;
	arr[9] = 95;
	ft_sort_int_tab(arr, 10);
	while (i < 10)
	{
		printf("index: %i, %i \n", i, arr[i]);
		i++;
	}
	return (1);
}
