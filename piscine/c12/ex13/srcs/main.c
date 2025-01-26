/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 10:19:56 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/23 10:02:43 by isysoev          ###   ########.fr       */
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
	t_list 	*node2;
	t_list	*node3;
	

	char *str[3] = {"Bar", "Geez", "Louiz"};
	node = ft_list_push_strs(3, str);
	char *str2[3] = {"Weebee", "BooBoo", "Shawty"};
	node2 = ft_list_push_strs(3, str2);
	ft_list_merge(&node, node2);
	printf("Merge two normal lists: \n");
	ft_print_list(node);
		
	node3 = NULL;
	ft_list_merge(&node3, node2);
	printf("*begin_list is empty: \n");
	ft_print_list(node3);

	printf("NULL pointer: \n");
	ft_list_merge(NULL, node2);

	printf("second list is null: \n");
	node3 = NULL;
	ft_list_merge(&node2, node3);
	ft_print_list(node2);

	return (0);
}
