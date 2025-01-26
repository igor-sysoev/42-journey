/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 10:19:56 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/22 09:58:13 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_print_data(void *data)
{
	printf("%s\n", (char *) data);
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
	ft_list_foreach(node, ft_print_data);
	return (0);
}
