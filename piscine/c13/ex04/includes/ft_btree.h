/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 13:20:18 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/29 09:15:18 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}		t_btree;

t_btree	*btree_create_node(void *item);
void	btree_apply_prefix(t_btree *node, void (*applyfn)(void *));
void	btree_apply_infix(t_btree *node, void (*applyfn)(void *));
void	btree_apply_suffix(t_btree *node, void (*applyfn)(void *));
void	btree_insert_data(t_btree **root, void *item, int (*cmpfn)(void *, void *));
