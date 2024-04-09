/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 21:22:46 by isysoev           #+#    #+#             */
/*   Updated: 2024/04/09 21:44:16 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!ft_islower(*str++))
			return (0);
	}
	return (1);
}

int	main(void)
{
	char	*p;
	char	*t;

	p = "onlylowercase";
	t = "Not only LowerCase";
	printf("%i, %i", ft_str_is_lowercase(p), ft_str_is_lowercase(t));
	return (1);
}
