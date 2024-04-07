/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 20:05:27 by isysoev           #+#    #+#             */
/*   Updated: 2024/04/07 20:19:48 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int len)
{
	int	i;
	int	temp;

	i = 0;
	while (i < len / 2)
	{
		temp = tab[i];
		tab[i] = tab[len - i - 1];
		tab[len - i - 1] = temp;
		i++;
	}
}

int	main(void)
{
	int	arr[5];
	int	index;

	index = 0;
	while (index < 5)
	{
		arr[index] = index + 1;
		index++;
	}
	ft_rev_int_tab(arr, 5);
	index = 0;
	while (index < 5)
	{
		printf("%i", arr[index]);
		index++;
	}
	return (1);
}
