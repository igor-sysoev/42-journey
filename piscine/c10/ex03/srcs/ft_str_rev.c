/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_rev.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 09:25:34 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/14 10:10:19 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ft.h>

char	*ft_str_rev(char *str)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return (str);
}
