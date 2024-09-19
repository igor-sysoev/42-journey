/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:02:47 by isysoev           #+#    #+#             */
/*   Updated: 2024/09/19 19:47:42 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_string(char *s)
{
	while (*s != '\0')
	{
		ft_putchar(*s);
		s++;
	}
	ft_putchar('\n');
}

int	main(int argc, char *argv[])
{	
	int	i;
	int	j;
	char	*temp;

	i = 1;
	j = 1;

	while (i < argc)
	{
		j = 1;
		while (j < argc - 1)
		{
			if(*argv[j] > *argv[j + 1])
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	
	i = 1;
	while ( i < argc )
	{
		ft_print_string(argv[i]);
		i++;
	}
	return (1);
}
