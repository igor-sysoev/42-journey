/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 19:59:30 by isysoev           #+#    #+#             */
/*   Updated: 2024/04/07 20:02:16 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

int	main(void)
{
	int	len;

	len = ft_strlen("Hello");
	printf("%i", len);
	return (1);
}
