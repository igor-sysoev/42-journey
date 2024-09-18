/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:32:36 by isysoev           #+#    #+#             */
/*   Updated: 2024/05/29 13:46:19 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./ft_fibonacci.c"
#include <stdio.h>

int	main(void)
{
	printf("Expected result - 5, result - %i \n", ft_fibonacci(5));
	printf("Expected result - 21, result - %i \n", ft_fibonacci(8));
	return (1);
}
