/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 19:25:43 by isysoev           #+#    #+#             */
/*   Updated: 2024/05/13 19:27:35 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n <= 0)
		return (0);
	while (n-- > 0 && *s1 == *s2 && *s1 != '\0' && *s2 != '\0')
		;
	if (*s1 == *s2)
		return (0);
	return (*s1 - *s2);
}
