/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 12:14:59 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/30 12:37:57 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ft_btree.h>
#include <stdlib.h>

int	btree_level_count(t_btree *root)
{
	int	res1;
	int	res2;

	if (root == NULL)
		return (0);
	res1 = 1 + btree_level_count(root->left);
	res2 = 1 + btree_level_count(root->right);
	if (res1 > res2)
		return (res1);
	return (res2);
}
