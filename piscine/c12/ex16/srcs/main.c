/* ************************************************************************** */

/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 10:19:56 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/24 10:29:03 by isysoev          ###   ########.fr       */
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
	t_list *list;

	list = NULL;
	ft_sorted_list_insert(&list, "5", ft_strcmp_data);
	ft_sorted_list_insert(&list, "3", ft_strcmp_data);
	ft_sorted_list_insert(&list, "7", ft_strcmp_data);
	ft_sorted_list_insert(&list, "1", ft_strcmp_data);
	ft_sorted_list_insert(&list, "3", ft_strcmp_data);
	ft_sorted_list_insert(&list, "3", ft_strcmp_data); // Duplicate
	ft_sorted_list_insert(&list, "3", ft_strcmp_data); // Another duplicate$%
	ft_print_list(list);
	return (0);
}
