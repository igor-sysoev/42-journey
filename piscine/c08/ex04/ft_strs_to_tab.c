/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 10:51:38 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/02 12:31:04 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *str)
{
	char	*cpy;
	char	*start;

	cpy = malloc(ft_strlen(str) * sizeof(char) + 1);
	start = cpy;
	while (*str != '\0')
	{
		*cpy = *str;
		cpy++;
		str++;
	}
	*cpy = '\0';
	return (start);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock_arr;
	int			i;

	i = 0;
	stock_arr = malloc(sizeof(t_stock_str) * ac);
	while (i < ac)
	{
		stock_arr[i].size = ft_strlen(av[i]);
		stock_arr[i].copy = ft_strcpy(av[i]);
		stock_arr[i].str = av[i];
		i++;
	}
	return (stock_arr);
}
