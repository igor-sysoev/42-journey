/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 10:19:56 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/22 10:30:00 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	ft_print_data(void *data)
{
	printf("%s\n", (char *) data);
}

int	ft_strcmp_data(void *data, void *data2)
{
	return (strcmp((char *) data, (char *) data2));	
}

void	ft_print_list(t_list *node)
{
	if (node != NULL)
	{
		printf("%s \n", (char *)node->data);
		ft_print_list(node->next);
	}
}

int	main(void)
{	
	t_list	*node;

	char *str[8] = {"Hello", "World", "Nigga", "Some New El", "Foo", "Buz", "FizzBuzz", "Bar"};
	node = ft_list_push_strs(8, str);
	node = ft_list_find(node, "Some New El", ft_strcmp_data);
	ft_print_data(node->data);
	return (0);
}
