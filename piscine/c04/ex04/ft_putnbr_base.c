/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 23:34:07 by isysoev           #+#    #+#             */
/*   Updated: 2024/05/17 16:27:47 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_handleneg(long *nbr)
{
	if (*nbr < 0)
	{
		*nbr = -(*nbr);
		ft_putchar('-');
	}
}

int	ft_hasduplicates(char	*base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j] == base[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_printnbr(long nbr, char *string, char *base, int len)
{
	int	i;

	i = 0;
	while (nbr != 0)
	{
		string[i++] = base[nbr % len];
		nbr /= len;
	}
	while (i > 0)
	{
		ft_putchar(string[--i]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	*p;
	int		len;
	char	string[100];
	long	number;

	len = 0;
	p = base;
	number = nbr;
	ft_handleneg(&number);
	while (*base++ != '\0')
		len++;
	base = p;
	if (nbr == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (len < 2 || ft_hasduplicates(base) || *base == '\0')
	{
		ft_putchar('\0');
		return ;
	}
	ft_printnbr(number, string, base, len);
}
