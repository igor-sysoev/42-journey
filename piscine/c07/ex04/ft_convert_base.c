/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:36:28 by isysoev           #+#    #+#             */
/*   Updated: 2024/12/30 08:24:35 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++ != '\0')
		i++;
	return (i);
}

int	ft_get_base_value(char c, char *base)
{
	int	i;

	i = 0;
	while (*base++ != c)
		i++;
	return (i);
}

char	*ft_itoa_base(int nbr, char *base_to)
{
	char	*str;
	int		len;
	int		i;
	int		is_neg;

	i = 0;
	is_neg = 0;
	if (nbr < 0)
	{
		is_neg = 1;
		nbr = -nbr;
	}
	str = malloc(sizeof(char) * 100);
	len = ft_strlen(base_to);
	while (nbr != 0)
	{
		str[i++] = base_to[nbr % len];
		nbr /= len;
	}
	if (is_neg)
		str[i++] = '-';
	return (str);
}

int	ft_atoi(char *str, char *base_from)
{
	int	num;
	int	len;
	int	neg;

	neg = 1;
	len = ft_strlen(base_from);
	num = 0;
	if (*str == '-')
	{
		neg = -1;
		str++;
	}
	while (*str != '\0')
	{
		num = len * num + ft_get_base_value(*str, base_from);
		str++;
	}
	return (num * neg);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		i;
	int		len;
	char	temp;
	char	*res;

	i = 0;
	temp = 0;
	i = ft_atoi(nbr, base_from);
	res = ft_itoa_base(i, base_to);
	len = ft_strlen(res) - 1;
	i = 0;
	while (i < len)
	{
		temp = res[i];
		res[i] = res[len];
		res[len] = temp;
		i++;
		len--;
	}
	return (res);
}
