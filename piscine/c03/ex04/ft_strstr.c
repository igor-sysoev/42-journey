/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:02:05 by isysoev           #+#    #+#             */
/*   Updated: 2024/05/14 20:26:45 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*p;
	char	*q;

	p = str;
	q = to_find;
	while (*str != '\0')
	{
		if (*to_find == '\0')
			return (p);
		if (*str == *to_find)
		{
			if (p == NULL)
				p = str;
			to_find++;
		}
		else
		{
			to_find = q;
			p = NULL;
		}
		str++;
	}
	if (*to_find == '\0')
		return (p);
	return (NULL);
}
