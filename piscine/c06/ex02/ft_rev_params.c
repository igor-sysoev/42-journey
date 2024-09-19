/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:29:00 by isysoev           #+#    #+#             */
/*   Updated: 2024/09/18 18:32:29 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	while (argc > 0)
	{
		while (*argv[argc] != '\0')
		{
			ft_putchar(*argv[argc]++);
		}
		ft_putchar('\n');
		argc--;
	}
}
