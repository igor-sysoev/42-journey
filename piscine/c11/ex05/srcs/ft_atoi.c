/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 10:16:36 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/17 10:16:29 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ft.h>

int	ft_atoi(char *str)
{
	int	num;
	int	sign;

	num = 0;
	sign = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-' && sign == -1)
			sign = 1;
		else if (*str == '-' && sign == 1)
			sign = -1;
		else
			sign = 1;
		str++;
	}
	while (*str != '\0' && *str >= '0' && *str <= '9')
		num = (num * 10) + *str++ - '0';
	return (num * sign);
}
