/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 19:38:19 by isysoev           #+#    #+#             */
/*   Updated: 2024/04/23 19:39:13 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalphanum(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

char	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
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
			if (word_start)
				str[i] = ft_toupper(str[i]);
			else
				str[i] = ft_tolower(str[i]);
			word_start = 0;
		}
		else
			word_start = 1;
		i++;
	}
	return (str);
}
