/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 10:19:56 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/28 11:17:22 by isysoev          ###   ########.fr       */
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
	t_btree	*node;

	node = btree_create_node("1");
	node->left = btree_create_node("2");
	node->left->left = btree_create_node("4");
	node->left->right = btree_create_node("5");
	node->right = btree_create_node("3");
	node->right->right = btree_create_node("6");
	btree_apply_suffix(node, ft_print_data);
	return (0);
}
