/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ascii.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 09:52:21 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/15 11:56:53 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

void	ft_print_ascii(char *str, int prev_size)
{
	int	padding;
	int	i;

	i = 0;
	padding = 50 - prev_size * 3;
	if (prev_size > 8)
		padding--;
	else
		padding++;
	while (padding-- > 0)
		ft_putchar(' ');
	ft_putchar('|');
	while (i < prev_size)
	{
		if (str[i] <= 126 && str[i] >= 32)
			ft_putchar(str[i]);
		else
			ft_putchar('.');
		i++;
	}
	ft_putchar('|');
}
