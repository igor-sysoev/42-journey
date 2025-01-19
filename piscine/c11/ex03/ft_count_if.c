/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 09:22:53 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/16 09:32:00 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	if ( f == NULL || tab == NULL)
		return (count);
	while (i < length)
	{
		if (tab[i] != NULL && f(tab[i]) != 0)

			count++;
		i++;
	}
	return (count);
}

int starts_with_z(char* str)
{
	return str[0] == 'z';
}

int main(int argc, char** argv)
{
	printf("%d", ft_count_if(argv + 1, argc - 1, starts_with_z));
	if (argc < 2)
		return 0;
}
