/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:39:23 by isysoev           #+#    #+#             */
/*   Updated: 2024/05/14 20:45:10 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *str, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (*dest != '\0')
	{
		dest++;
		i++;
	}
	while (*str != '\0' && (size--) - i > 0)
	{
		*dest++ = *str++;
	}
	*dest = '\0';
	return (size);
}
