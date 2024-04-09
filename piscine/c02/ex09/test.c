/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 22:18:21 by isysoev           #+#    #+#             */
/*   Updated: 2024/04/09 22:38:08 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isalphanum(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	word_start;
	int	i;

	word_start = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isalphanum(str[i]))
		{
			if (word_start && str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			word_start = 0;
		}
		else
		{
			word_start = 1;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	s[] = {"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un"};

	printf("%s", ft_strcapitalize(s));
	return (1);
}
