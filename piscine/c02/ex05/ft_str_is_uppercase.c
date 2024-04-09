/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 21:50:22 by isysoev           #+#    #+#             */
/*   Updated: 2024/04/09 21:50:24 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
