/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 10:19:56 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/31 12:20:58 by isysoev          ###   ########.fr       */
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

void print_node(void *item, int level, int is_first) {
    // If it's the first node on this level, print a newline first
    if (is_first)
        printf("\n Level %d: ", level);

    // Print the actual number with a separator
    printf("%s ", (char *)item);
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
	btree_apply_by_level(root, print_node); 
	return (0);
}
