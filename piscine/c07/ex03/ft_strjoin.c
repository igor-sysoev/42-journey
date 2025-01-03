/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:39:33 by isysoev           #+#    #+#             */
/*   Updated: 2024/11/07 16:24:06 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}

int	ft_strslen(char **strs, int size)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (i < size)
		len += ft_strlen(strs[i++]);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	char	*str;
	char	*cpy;
	char	*sep_cpy;

	i = 0;
	len = ft_strslen(strs, size);
	str = malloc(sizeof(char) * len + 1);
	cpy = str;
	sep_cpy = sep;
	while (i < size)
	{
		while (*strs[i] != '\0')
			*str++ = *strs[i]++;
		while (i != size - 1 && *sep != '\0')
			*str++ = *sep++;
		sep = sep_cpy;
		i++;
	}
	*str = '\0';
	return (cpy);
}
