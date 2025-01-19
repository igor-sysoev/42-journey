/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 10:26:18 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/19 09:11:50 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <ft.h>

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		sorted;
	char	*temp;

	sorted = 0;
	temp = 0;
	i = 0;
	while (!sorted)
	{
		i = 0;
		sorted = 1;
		while (tab[i + 1])
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				sorted = 0;
			}
			i++;
		}
	}
}
