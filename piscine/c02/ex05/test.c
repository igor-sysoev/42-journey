/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 21:46:46 by isysoev           #+#    #+#             */
/*   Updated: 2024/04/09 21:49:59 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!ft_isupper(*str++))
			return (0);
	}
	return (1);
}

int	main(void)
{
	char	*p;
	char	*t;

	p = "ONLYUPPERCASE";
	t = "Not only LowerCase";
	printf("%i, %i, %i", ft_str_is_uppercase(p), ft_str_is_uppercase(t), ft_str_is_uppercase(""));
	return (1);
}
