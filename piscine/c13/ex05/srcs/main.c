/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 10:19:56 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/30 12:11:07 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ft_btree.h>
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

void	test_free(void *data)
{
	printf("Deallocating data: %s \n", (char *) data);
}

int	main(void)
{
	t_btree	*root;

	root = NULL;
	btree_insert_data(&root, "5", ft_strcmp_data);
	btree_insert_data(&root, "3", ft_strcmp_data);
	btree_insert_data(&root, "8", ft_strcmp_data);
	btree_insert_data(&root, "4", ft_strcmp_data);
	btree_insert_data(&root, "1", ft_strcmp_data);
	btree_insert_data(&root, "9", ft_strcmp_data);
	btree_insert_data(&root, "7", ft_strcmp_data);
	btree_insert_data(&root, "6", ft_strcmp_data);
	btree_insert_data(&root, "2", ft_strcmp_data);
	btree_insert_data(&root, "4", ft_strcmp_data);
	btree_insert_data(&root, "7", ft_strcmp_data);
	root = btree_search_item(root, "7", ft_strcmp_data);
	btree_apply_infix(root, ft_print_data);
	return (0);
}
