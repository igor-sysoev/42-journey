/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 21:59:41 by isysoev           #+#    #+#             */
/*   Updated: 2024/04/09 21:59:43 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprintable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!ft_isprintable(*str++))
			return (0);
	}
	return (1);
}
