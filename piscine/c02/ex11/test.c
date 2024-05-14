/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 21:38:47 by isysoev           #+#    #+#             */
/*   Updated: 2024/05/12 18:06:43 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
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
	char	*str;
	int		i;

	i = 0;
	str = "00";
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

int	main(void)
{
	ft_putstr_non_printable("Hello\nworld!");
}
