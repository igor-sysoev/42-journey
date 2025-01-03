/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:21:33 by isysoev           #+#    #+#             */
/*   Updated: 2024/11/06 18:32:13 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ultimate_range(int **ptr, int min, int max)
{
	int	len;
	int	i;

	i = 0;
	if (min >= max)
	{
		*ptr = (NULL);
		return (0);
	}
	len = max - min;
	*ptr = malloc(sizeof(int) * len);
	while (i < len)
		(*ptr)[i++] = min++;
	return (i);
}
