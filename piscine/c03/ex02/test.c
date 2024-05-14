/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 19:28:56 by isysoev           #+#    #+#             */
/*   Updated: 2024/05/13 19:38:35 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*p;

	p = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (p);
}

int	main(void)
{
	char	dest[100];
	char	*src;

	dest[0] = 'H';
	dest[1] = 'I';
	dest[2] = '!';
	src = " You stupid mothafuckar!";
	printf("%s\n", ft_strcat(dest, src));
	return (1);
}
