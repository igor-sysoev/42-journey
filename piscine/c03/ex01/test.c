/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 19:16:47 by isysoev           #+#    #+#             */
/*   Updated: 2024/05/13 19:23:46 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n-- > 0 && *s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	
	if (*s1 == *s2)
		return (0);
	return (*s1 - *s2);
}

int	main(void)
{
	printf("%i \n", ft_strncmp("hello", "hello", 3));
	printf("%i \n", ft_strncmp("test", "hello", 2));
	printf("%i \n", ft_strncmp("h1llo", "hello", 1));
	
	printf("%i \n", strncmp("hello", "hello", 3));
	printf("%i \n", strncmp("test", "hello", 2));
	printf("%i \n", strncmp("h1llo", "hello", 1));
	return (1);
}
