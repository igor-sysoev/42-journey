/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 09:50:01 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/17 10:13:53 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ft.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		value1;
	int		value2;
	char	operator;

	if (argc != 4)
	{
		ft_putstr("Usage: ./ft_doop value1 operator value2\n");
		return (1);
	}
	value1 = ft_atoi(argv[1]);
	operator = *argv[2];
	value2 = ft_atoi(argv[3]);
	if (ft_check_errors(value2, operator))
		return (1);
	ft_putnbr(ft_doop(value1, value2, operator));
	return (0);
}
