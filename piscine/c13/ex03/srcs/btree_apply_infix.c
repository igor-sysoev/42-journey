/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 10:25:32 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/28 10:43:46 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ft_btree.h>
#include <stdlib.h>

void	btree_apply_infix(t_btree *node, void (*applyfn)(void *))
{
	if (node == NULL)
		return ;
	btree_apply_infix(node->left, applyfn);
	applyfn(node->item);
	btree_apply_infix(node->right, applyfn);
}
