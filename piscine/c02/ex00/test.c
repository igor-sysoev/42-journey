/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 20:32:21 by isysoev           #+#    #+#             */
/*   Updated: 2024/04/09 20:32:24 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dst, char *src)
{
	while (*src != '\0')
	{
		*dst++ = *src++;
	}
	*dst = '\0';
	return (dst);
}

int	main(void)
{
	char	*t;
	char	dest[100];

	t = "Hello world";
	ft_strcpy(dest, t);
	printf("%s", dest);
}
