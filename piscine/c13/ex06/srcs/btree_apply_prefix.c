/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 09:51:40 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/28 10:02:42 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ft_btree.h>
#include <stdlib.h>

void	btree_apply_prefix(t_btree *node, void (*applyfn)(void *))
{
	if (node == NULL)
		return ;
	applyfn(node->item);
	btree_apply_prefix(node->left, applyfn);
	btree_apply_prefix(node->right, applyfn);
}
