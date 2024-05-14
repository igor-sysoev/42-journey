/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 19:42:11 by isysoev           #+#    #+#             */
/*   Updated: 2024/05/14 20:22:18 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*p;
	char	*q;

	p = str;
	q = to_find;
	while (*str != '\0')
	{
		if(*to_find == '\0')
			break;
		if (*str == *to_find)
		{
			if (p == NULL)
				p = str;
			to_find++;
		}
		else
		{
			to_find = q;
			p = NULL;
		}
		str++;
	}
	if(*to_find != '\0') return NULL;
	return (p);
}

int	main(void)
{
	char *largestring = "42 1337 Network 2021 piscine Bengeurir Khouribga";
	char *smallstring = "abcd";
	char *ptr;

	ptr = ft_strstr(largestring, smallstring);

	printf("%s", ptr);
	return (1);
}
