/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 09:09:21 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/29 09:48:28 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ft_btree.h>
#include <stdlib.h>

void	btree_insert_data(t_btree **root, void *item,
int (*cmpfn)(void *, void *))
{
	if (*root == NULL)
	{
		*root = btree_create_node(item);
		return ;
	}
	if (cmpfn((*root)->item, item) == 0)
		return ;
	if (cmpfn((*root)->item, item) > 0)
		btree_insert_data(&(*root)->left, item, cmpfn);
	else
		btree_insert_data(&(*root)->right, item, cmpfn);
}
