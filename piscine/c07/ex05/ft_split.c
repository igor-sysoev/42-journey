/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 08:25:52 by isysoev           #+#    #+#             */
/*   Updated: 2024/12/31 10:27:16 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncpy(char *str, int n)
{
	char	*res;
	char	*p;

	res = malloc(sizeof(char) * n);
	p = res;
	while (*str != '\0' && n > 0)
	{
		*res++ = *str++;
		n--;
	}
	return (p);
}

int	ft_is_charset(char c, char *charset)
{
	int	i;
	int	is_charset;

	is_charset = 0;
	i = 0;
	while (i < ft_strlen(charset))
	{
		if (c == charset[i])
			is_charset = 1;
		i++;
	}
	return (is_charset);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	char	*p;
	int		i;
	int		len;
	int		substr_len;

	substr_len = 0;
	len = 0;
	arr = malloc(sizeof(char*) * 30);
	p = str;
	i = 0;
	while (i < ft_strlen(str))
	{
		if (charset != NULL && ft_is_charset(str[i], charset))
		{
			if (substr_len > 0)
			{
				arr[len++] = ft_strncpy(p, substr_len);
				p += substr_len;
				substr_len = 0;
			}
			i++;
			p++;
		}
		else
		{
			substr_len++;
			i++;
		}
	}
	if (substr_len > 0)
		arr[len++] = ft_strncpy(p, substr_len);
	arr[len++] = NULL;
	return (arr);
}
