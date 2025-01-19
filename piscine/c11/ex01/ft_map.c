/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 09:05:19 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/16 09:14:34 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*arr;
	int	i;

	i = 0;
	if (length < 0 || tab == NULL || f == NULL)
		return (NULL);
	arr = malloc(sizeof(int) * length);
	if (arr == NULL)
		return (NULL);
	while (i < length)
	{
		arr[i] = f(tab[i]);
		i++;
	}
	return (arr);
}
