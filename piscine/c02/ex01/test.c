/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 20:33:12 by isysoev           #+#    #+#             */
/*   Updated: 2024/04/09 20:43:53 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	while (*src != '\0' && n-- > 0)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (dest);
}

int	main(void)
{
	char	*t;
	char	dest[50];

	t = "Test string, it has a lot of cool chars:p";
	ft_strncpy(dest, t, 4);
	printf("%s", dest);
	return (1);
}
