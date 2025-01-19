/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 09:37:59 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/16 09:49:22 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	is_sort;
	int	is_ascending;
	int	i;

	i = 0;
	is_sort = 1;
	if (tab == NULL || length == 0 || f == NULL)
		return (is_sort);
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			is_sort = 0;
		i++;
	}
	return (is_sort);
}
