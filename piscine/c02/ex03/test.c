/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 21:16:27 by isysoev           #+#    #+#             */
/*   Updated: 2024/04/09 21:21:44 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_str_is_numeric(char *s)
{
	while (*s != '\0')
	{
		if (!ft_isdigit(*s++))
			return (0);
	}
	return (1);
}

int	main(void)
{
	char	*t;
	char	*p;

	t = "123456790";
	p = "testing a non 123";
	printf("%i, %i", ft_str_is_numeric(t), ft_str_is_numeric(p));
	return (1);
}
