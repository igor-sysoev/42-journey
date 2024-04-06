/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 19:05:43 by isysoev           #+#    #+#             */
/*   Updated: 2024/04/04 13:08:53 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define MAX_LENGTH 256

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_handleoverflow(void)
{
	char	*s;

	s = "2147483648";
	while (*s != '\0')
	{
		ft_putchar(*s);
		s++;
	}
}

void	ft_handleneg(int *n, int *is_neg)
{
	if (*n < 0)
	{
		if (*n == -2147483648)
		{
			ft_handleoverflow();
			*n = 0;
		}
		else
		{
			*n = -*n;
			*is_neg = 1;
		}
	}
}

void	ft_putnbr(int n)
{
	char	s[MAX_LENGTH];
	char	c;
	int		len;
	int		is_neg;

	len = 0;
	is_neg = 0;
	ft_handleneg(&n, &is_neg);
	while (n % 10 > 0)
	{
		c = n % 10 + '0';
		s[len++] = c;
		n /= 10;
	}
	if (is_neg)
	{
		s[len++] = '-';
	}
	while (len-- > 0)
	{
		write(1, &(s[len]), 1);
	}
	ft_putchar('\n');
}

int	main(void)
{
	ft_putnbr(-2147483648);
	ft_putnbr(42);
	ft_putnbr(-412);
	return (1);
}
