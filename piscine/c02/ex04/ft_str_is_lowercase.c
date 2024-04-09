/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 21:45:25 by isysoev           #+#    #+#             */
/*   Updated: 2024/04/09 21:45:28 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!ft_islower(*str++))
			return (0);
	}
	return (1);
}
