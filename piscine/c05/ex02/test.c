/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:14:20 by isysoev           #+#    #+#             */
/*   Updated: 2024/05/20 14:32:18 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./ft_iterative_power.c"
#include <stdio.h>

void	ft_print_row(int a, int b)
{
	printf("%i \t %i \n", a, b);
}

int	main(void)
{
	printf("Expected result \t Result \n");
	ft_print_row(25, ft_iterative_power(5, 2));
	ft_print_row(81, ft_iterative_power(9, 2));
	ft_print_row(15625, ft_iterative_power(25, 3));
	ft_print_row(1, ft_iterative_power(0, 0));
	ft_print_row(0, ft_iterative_power(125, -2));
}
