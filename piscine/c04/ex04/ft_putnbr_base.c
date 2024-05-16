/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 23:34:07 by isysoev           #+#    #+#             */
/*   Updated: 2024/05/16 23:47:44 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	*p;
	int	len;
	char	string[100];
	int	i;

	i = 0;
	len = 0;
	p = base;
	if (nbr < 0)
	  nbr = -nbr;
	while (*base != '\0')
	{
		len++;
		base++;
	}
	base = p;
	if (!len)
	{
		ft_putchar('0');
		return;
	}
	while (nbr != 0)
	{
		string[i++] = base[nbr % len];
		nbr /= len;
	}
	while(i-- >= 0)
		ft_putchar(string[i]);

}
