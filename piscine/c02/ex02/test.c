/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 20:48:55 by isysoev           #+#    #+#             */
/*   Updated: 2024/04/09 21:12:27 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_str_is_alpha(char *str)
{
	int	is_alpha;

	is_alpha = 1;
	while (*str != '\0')
		if (!ft_isalpha(*str++))
			is_alpha = 0;
	return (is_alpha);
}

int	main(void)
{
	char	*t;
	char	*t2;

	t = "Hasonlyalphanums";
	t2 = "What is 1 + 23 ?";
	printf("%i, %i", ft_str_is_alpha(t), ft_str_is_alpha(t2));
	return (1);
}
