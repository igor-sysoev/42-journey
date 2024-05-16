/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:50:32 by isysoev           #+#    #+#             */
/*   Updated: 2024/05/16 23:22:29 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_handleoverflow(void)
{
	ft_putchar('-');
	ft_putchar('2');
	ft_putchar('1');
	ft_putchar('4');
	ft_putchar('7');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('3');
	ft_putchar('6');
	ft_putchar('4');
	ft_putchar('8');
}

int	ft_handleneg(int *nb, int *is_neg)
{
	if (*nb < 0)
	{
		if (*nb == -2147483648)
		{
			ft_handleoverflow();
			return (-1);
		}
		else
			*nb = -(*nb);
		*is_neg = 1;
	}
	return (1);
}

void	ft_putnbr(int nb)
{
	char	num[100];
	int		i;
	int		is_neg;
	int		status;

	i = 0;
	is_neg = 0;
	status = ft_handleneg(&nb, &is_neg);
	if (status == -1)
		return ;
	if (nb == 0)
		ft_putchar('0');
	while (nb != 0)
	{
		num[i++] = nb % 10 + '0';
		nb /= 10;
	}
	if (is_neg)
		ft_putchar('-');
	while (i-- >= 0)
		ft_putchar(num[i]);
}
