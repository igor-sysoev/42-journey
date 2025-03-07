/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 11:11:12 by isysoev           #+#    #+#             */
/*   Updated: 2025/03/07 16:52:22 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <bsq.h>

int	ft_atoi(char *str)
{
	int	num;

	num = 0;
	while (*str != '\0')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num);
}

int	is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

int	get_line_length(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (*str != '\n')
	{
		i++;
		str++;
	}
	i++;
	return (i);
}

int	min(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	if (b <= a && b <= c)
		return (b);
	return (c);
}
