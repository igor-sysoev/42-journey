/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 18:07:30 by isysoev           #+#    #+#             */
/*   Updated: 2024/05/12 18:10:04 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_isprintable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(char c)
{
	char	*hex;
	char	str[2];
	int		i;

	i = 0;
	str[0] = '0';
	str[1] = '0';
	hex = "0123456789abcdef";
	while (c % 16 > 0)
	{
		str[i++] = hex[c % 16];
		c /= 16;
	}
	ft_putchar('\\');
	ft_putchar(str[1]);
	ft_putchar(str[0]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_isprintable(str[i]))
		{
			ft_puthex(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
