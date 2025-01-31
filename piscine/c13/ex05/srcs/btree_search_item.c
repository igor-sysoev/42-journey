/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 10:15:03 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/30 12:13:47 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ft_btree.h>
#include <stdlib.h>

void	*btree_search_item(t_btree *root, void *data_ref,
int (*cmpfn)(void *, void *))
{
	t_btree	*res;

	res = NULL;
	if (root == NULL)
		return (NULL);
	res = btree_search_item(root->left, data_ref, cmpfn);
	if (res)
		return (res);
	if (cmpfn(root->item, data_ref) == 0)
		return (root->item);
	res = btree_search_item(root->right, data_ref, cmpfn);
	if (res)
		return (res);
	return (NULL);
}
