/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:06:18 by isysoev           #+#    #+#             */
/*   Updated: 2024/09/18 18:14:54 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	while (*argv[0] != '\0')
	{
		ft_putchar(*argv[0]++);
	}
	ft_putchar('\n');
	(void)argc;
	return (1);
}
