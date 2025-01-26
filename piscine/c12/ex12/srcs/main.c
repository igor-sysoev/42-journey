/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 10:19:56 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/23 09:33:23 by isysoev          ###   ########.fr       */
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
	printf("\n");
	if (node != NULL)
	{
		printf("%s \n", (char *)node->data);
		ft_print_list(node->next);
	}
}

void	test_free(void *data)
{
	printf("Deallocating data: %s \n", (char *) data);
}

int	main(void)
{	
	t_list	*node;

	char *str[3] = {"Bar", "Geez", "Louiz"};
	node = ft_list_push_strs(3, str);
	ft_list_remove_if(&node, "Bar", ft_strcmp_data, test_free);
	ft_print_list(node);
	return (0);
}
