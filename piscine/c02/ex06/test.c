/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 21:56:17 by isysoev           #+#    #+#             */
/*   Updated: 2024/04/09 21:59:09 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprintable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!ft_isprintable(*str++))
			return (0);
	}
	return (1);
}

int	main(void)
{
	char	*p;
	char	*t;

	p = "\x01\x05\x0a\x15";
	t = "Not only LowerCase";
	printf("%i, %i, %i", ft_str_is_printable(p), ft_str_is_printable(t), ft_str_is_printable(""));
	return (1);
}
