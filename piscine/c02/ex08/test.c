/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 22:15:46 by isysoev           #+#    #+#             */
/*   Updated: 2024/04/09 22:16:36 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = ft_tolower(str[i]);
		i++;
	}
	return (str);
}

int	main(void)
{
	char	*t;

	t = malloc(sizeof(char) * 4);
	t[0] = 'A';
	t[1] = 'B';
	t[2] = 'C';
	t[3] = '\0';
	printf("%s\n", t);
	printf("%s \n", ft_strlowcase(t));
	return (1);
}
