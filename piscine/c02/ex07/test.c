/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 22:00:10 by isysoev           #+#    #+#             */
/*   Updated: 2024/04/09 22:14:18 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	return (str);
}

int	main(void)
{
	char	*t;

	t = malloc(sizeof(char) * 4);
	t[0] = 'a';
	t[1] = 'b';
	t[2] = 'c';
	t[3] = '\0';
	printf("%s\n", t);
	printf("%s \n", ft_strupcase(t));
	return (1);
}
