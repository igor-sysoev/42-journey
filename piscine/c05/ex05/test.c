/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:48:23 by isysoev           #+#    #+#             */
/*   Updated: 2024/05/29 14:02:11 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "./ft_sqrt.c"

int	main(void)
{
	printf("Expected result - 2, result - %i \n", ft_sqrt(4));
	printf("Epxected result - 12, result - %i \n", ft_sqrt(144));
	printf("Expected result - 0, result - %i \n", ft_sqrt(2));
	printf("Epxected result - 0, result - %i \n", ft_sqrt(123));
	return (1);
}
