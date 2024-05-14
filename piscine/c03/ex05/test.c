/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:28:00 by isysoev           #+#    #+#             */
/*   Updated: 2024/05/14 20:39:02 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *str, unsigned int size)
{
	unsigned int	i;

	while(*str != '\0')
	{
		str++;
	}
	while(*dest != '\0' && size-- > 0)
	{
		*str++ = *dest++;
		i++;
	}
	*str = '\0';
	return (i);
}

int	main(void)
{
	
	return (1);
}
