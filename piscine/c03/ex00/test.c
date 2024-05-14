/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:45:45 by isysoev           #+#    #+#             */
/*   Updated: 2024/05/13 19:14:38 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	if (*s1 == '\0')
		return (0);
	return (*s1 - *s2);
}

int main(void)
{
	printf("%i \n", ft_strcmp("hello", "hello"));
	printf("%i \n", ft_strcmp("test", "hello"));
	printf("%i \n", ft_strcmp("h1llo", "hello"));
	
	printf("%i \n", strcmp("hello", "hello"));
	printf("%i \n", strcmp("test", "hello"));
	printf("%i \n", strcmp("h1llo", "hello"));
	return (1);
}

