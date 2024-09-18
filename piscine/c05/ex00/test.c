/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:46:20 by isysoev           #+#    #+#             */
/*   Updated: 2024/05/20 13:51:34 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./ft_iterative_factorial.c"
#include <stdio.h>

int	main(void)
{
	printf("Expected result - %i, result -  %i \n", 120, ft_iterative_factorial(5));
	printf("%i, %i \n", 1, ft_iterative_factorial(1));
	printf("%i, %i \n", 720, ft_iterative_factorial(6));
	return (1);
}
