/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 10:55:49 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/28 11:17:06 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ft_btree.h>
#include <stdlib.h>

void	btree_apply_suffix(t_btree *root, void (*applyfn)(void *))
{
	if (root == NULL)
		return ;
	btree_apply_suffix(root->left, applyfn);
	btree_apply_suffix(root->right, applyfn);
	applyfn(root->item);
}
