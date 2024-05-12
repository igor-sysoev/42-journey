/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 20:35:34 by isysoev           #+#    #+#             */
/*   Updated: 2024/05/12 17:53:21 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#define MAX_LEN 512

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_printstrn(char *str, int size)
{
	while (*str != '\0' && size-- > 0)
	{
		if (*str >= 32 && *str <= 126)
			ft_putchar(*str);
		else
			ft_putchar('.');
		str++;
	}
}

void	ft_itohex(uintptr_t number)
{
	char	string[MAX_LEN];
	int		i;	
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (number != 0)
	{
		string[i++] = hex[number % 16];
		number /= 16;
	}
	while (i-- > 0)
	{
		ft_putchar(string[i]);
	}
}

void	ft_handle_padding(void *addr, unsigned int size)
{
	int	remainder;
	int	padding;

	remainder = size % 16;
	padding = 16 - remainder;
	while (padding-- > 0)
		ft_putchar(' ');
	ft_printstrn(addr - remainder, remainder);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		if (i % 16 == 0)
		{
			if (i > 0)
			{
				ft_putchar(' ');
				ft_printstrn(addr - 16, 16);
				ft_putchar('\n');
			}
			ft_itohex((uintptr_t) addr);
			ft_putchar(':');
		}
		if (i % 2 == 0)
			ft_putchar(' ');
		ft_itohex(*(char *)addr);
		addr++;
		i++;
	}
	ft_handle_padding(addr, size);
	return (addr);
}

int	main(void)
{
	char	*string;

	string = "Bonjour les aminches.\n\t c'est fou.tout.ce. qu on peut faire avec. ..print_memory....lol.lol. .";
	ft_print_memory(string, 93);
	return (1);
}
